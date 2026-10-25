#ifndef CLASSES_OBJ422594DELETE_H
#define CLASSES_OBJ422594DELETE_H

/* How Obj422594 and its subclasses free their storage in SMT IV: Apocalypse. */
extern "C" void asdOperatorDelete(void *block);

static __inline void obj422594FreeBlock(void *block)
{
    asdOperatorDelete(block);
}

#endif
