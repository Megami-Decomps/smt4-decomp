#include "classes/Obj559720.h"

extern "C" {
void *_ZN9Obj559720D1Ev(void *self);
void operatorDelete(void *memory);

/* C entry retained: the destructor result feeds delete directly in retail;
 * a native call preserves this in r4, and generated D0 inlines the destructor. */
void _ZN9Obj559720D0Ev(void *self)
{
    operatorDelete(_ZN9Obj559720D1Ev(self));
}
}
