#pragma once

#include "MovementStrategyInterface.h"


namespace corsim
{
    class RegularMovementStrategy : public MovementStrategyInterface
    {
        public:
            int MoveSubjects(std::vector<Subject> &subjects, int dt);

    };

} 