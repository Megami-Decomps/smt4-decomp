/* NON_MATCHING: retail's destructor loop loads the element's vtable into r1 and the destructor slot into r1 (ldr r1,[r4]; mov r0,r4; ldr r1,[r1]); the build loads the vtable into r0 first, and keeps the member address in a separate register instead of advancing r0 past the vptr store. */
#include "classes/Obj55a800.h"

/* Destroys every element (the vector member does it) and releases the backing allocation. */
Obj55a800::~Obj55a800() {}
