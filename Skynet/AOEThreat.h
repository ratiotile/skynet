#pragma once
#include <memory>
#include "Interface.h"

class AOEThreatClass
{
public:
	AOEThreatClass(Unit unit);
	AOEThreatClass(BWAPI::Bullet bullet);

	bool hasGone() const;

	Position getPosition() const;
	int getRadius() const;
	Unit getTarget() const;

	bool isAirThreat() const;
	bool isGroundThreat() const;
	bool isEnergyThreat() const;

	void draw() const;

private:
	Unit mUnit;
	BWAPI::Bullet mBullet;
};
typedef std::shared_ptr<AOEThreatClass> AOEThreat;