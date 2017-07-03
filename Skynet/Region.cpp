#include "Region.h"

#include "Chokepoint.h"
#include "Base.h"
#include "TerrainAnaysis.h"

RegionClass::RegionClass(Position center, int clearance)
	: mCenter(center)
	, mClearance(clearance)
{
}

std::set<Chokepoint> RegionClass::getChokepoints() const
{
	return mChokepoints;
}

void RegionClass::addChokepointTile(Chokepoint chokepoint, TilePosition tile)
{
	mChokePointToTiles[chokepoint] = tile;
	mChokePointTiles.insert(tile);
}

void RegionClass::addChokepoint(Chokepoint chokepoint)
{
	mChokepoints.insert(chokepoint);
}

void RegionClass::draw(BWAPI::Color color)
{
	BWAPI::Broodwar->drawCircle(BWAPI::CoordinateType::Map, mCenter.x, mCenter.y, 64, color);
	for each(Chokepoint chokepoint in mChokepoints)
	{
		Chokepoint choke = chokepoint;
		BWAPI::Broodwar->drawLine(BWAPI::CoordinateType::Map, choke->getCenter().x, choke->getCenter().y, mCenter.x, mCenter.y, color);
	}
}

bool RegionClass::isConnected(Region region) const
{
	return TerrainAnaysis::Instance().getWalkConnectivity(mCenter) == TerrainAnaysis::Instance().getWalkConnectivity(region->getCenter());
}

void RegionClass::removeChokepoint(Chokepoint chokepoint)
{
	mChokepoints.erase(chokepoint);
	mChokePointTiles.erase(mChokePointToTiles[chokepoint]);
	mChokePointToTiles.erase(chokepoint);
}