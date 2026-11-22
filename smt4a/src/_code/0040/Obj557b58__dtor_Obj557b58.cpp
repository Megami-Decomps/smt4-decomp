#include "classes/Obj557b58.h"

/* Deletes every body, then frees the array. */
Obj557b58::~Obj557b58()
{
    std::vector<Obj557b18 *>::iterator end = bodies.end();
    for (std::vector<Obj557b18 *>::iterator it = bodies.begin(); it != end; ++it) {
        Obj557b18 *body = *it;
        if (body != NULL) {
            delete body;
        }
    }
    bodies.clear();
}
