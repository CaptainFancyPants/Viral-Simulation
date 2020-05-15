#pragma once

#include "MovementStrategyInterface.h"

namespace corsim {

    class ExitMovementStrategy : public MovementStrategyInterface {
    public:
        int MoveSubjects(std::vector<Subject>& subjects, int dt);
    };
}