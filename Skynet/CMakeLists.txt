cmake_minimum_required(VERSION 3.1)
project(Skynet)

find_package(BWAPI REQUIRED)
find_package(Boost COMPONENTS filesystem REQUIRED)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_SHARED_LIBRARY_PREFIX "")

include_directories(include ${BWAPI_INCLUDE_DIRS} ${Boost_INCLUDE_DIRS})

add_library(Skynet SHARED
	AdvancedGroup.cpp
	AOEThreat.cpp
	AOEThreatTracker.cpp
	ArbiterAction.cpp
	ArconZealotKillUnDetected.cpp
	Base.cpp
	BaseTracker.cpp
	BasicUnitAction.cpp
	Behaviour.cpp
	BlockedPathManager.cpp
	BorderPosition.cpp
	BorderTracker.cpp
	BuildingPlacer.cpp
	BuildOrder.cpp
	BuildOrderManager.cpp
	BuildTilePath.cpp
	Chokepoint.cpp
	Condition.cpp
	ConstructionTask.cpp
	DefaultSquad.cpp
	DefenseSquad.cpp
	DetectorAction.cpp
	DLL.cpp
	DrawBuffer.cpp
	DrawingHelper.cpp
	DropAction.cpp
	ExpansionManager.cpp
	GameMemory.cpp
	GameProgressDetection.cpp
	GatherTask.cpp
	Goal.cpp
	GoalAction.cpp
	IdleTask.cpp
	LatencyTracker.cpp
	LoadOtherBuilds.cpp
	LoadProtossBuilds.cpp
	LoadTerranBuilds.cpp
	LoadZergBuilds.cpp
	MacroManager.cpp
	MapHelper.cpp
	MineBlockingMineralTask.cpp
	MineDragAction.cpp
	MorphTask.cpp
	ObserverScoutTask.cpp
	PathFinder.cpp
	PlayerTracker.cpp
	PositionPath.cpp
	PsiStormAction.cpp
	PylonPowerTracker.cpp
	Region.cpp
	RegionPath.cpp
	Requirement.cpp
	RequirementGroup.cpp
	ReservedLocation.cpp
	ResourceManager.cpp
	ResourceTracker.cpp
	ScoutData.cpp
	ScoutManager.cpp
	Skynet.cpp
	SquadManager.cpp
	SupplyManager.cpp
	TaskManager.cpp
	TaskPump.cpp
	TechTask.cpp
	TerrainAnaysis.cpp
	TrainInterceptorAction.cpp
	TrainScarabAction.cpp
	TrainTask.cpp
	Unit.cpp
	UnitFilter.cpp
	UnitGroup.cpp
	UnitHelper.cpp
	UnitInformation.cpp
	UnitPredictor.cpp
	UnitTracker.cpp
	UpgradeTask.cpp
	WalkPositionPath.cpp
	WallTracker.cpp
	WorkerScoutTask.cpp
)

set_property(TARGET Skynet PROPERTY POSITION_INDEPENDENT_CODE ON)

target_link_libraries(Skynet ${BWAPI_LIBRARIES} ${Boost_LIBRARIES})
