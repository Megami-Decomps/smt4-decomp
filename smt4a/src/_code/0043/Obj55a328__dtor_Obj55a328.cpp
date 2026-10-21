/* NON_MATCHING: retail inlines base destruction; canonical base destructor is out of line, and its visible-body form also differs in post-increment/vcall scheduling. */
#include "classes/Obj55aae4.h"

class Obj55a328 : public Obj55aae4 {
public:
    virtual ~Obj55a328();
};

// Destroy the base array of polymorphic eight-byte elements.
Obj55a328::~Obj55a328()
{
}
