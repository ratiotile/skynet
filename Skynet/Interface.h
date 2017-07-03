#include <BWAPI.h>
#include <memory>

typedef BWAPI::TilePosition TilePosition;
typedef BWAPI::Position Position;
typedef BWAPI::PlayerInterface* Player;

class UnitClass;
typedef std::shared_ptr<UnitClass> Unit;

#include "Vector.h"
#include "WalkPosition.h"
#include "Unit.h"
#include "UnitGroup.h"