#include "LockdownMovementStrategy.h"

namespace corsim
{

    int LockdownMovementStrategy::MoveSubjects(std::vector<Subject>& subjects, int dt, int counter)
    {
        int numberInfected = 0;

        // (75%)
        int amountImmovableSubjects = 150;

        for (int i = 0; i < amountImmovableSubjects; i++) {
            subjects[i].movable = false;
        }
        
        for (Subject& s : subjects) {

            if (s.movable == true) {
                s.set_x(s.x() + s.dx() * dt);
                s.set_y(s.y() + s.dy() * dt);
            }

            if (s.infected()) {
                numberInfected++;
            }
        }

        return numberInfected;
    } 
} 