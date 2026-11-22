/* NON_MATCHING: 8 lines: only the inlined vector growth (_C_insert_aux's new capacity) computes `size + 32`
 * before the 1.625x growth where retail computes it after (the same inline in reserve matches); the same
 * library-inline difference as moriModelEffectRebuildKeys. */
#include <new>
#include "classes/Obj557b58.h"
#include "classes/Obj557b18.h"
#include "gfx/ControllerModel.h"

/* Creates one body per part of the model resource and starts each on the animations of its state. */
extern "C" void moriModelArrayConstruct(Obj557b58 *array, UnitModelContent *content)
{
    u16 count = content->view.table->partCount;
    array->count = count;
    array->bodies.reserve(count);
    for (s32 i = 0; i < count; i++) {
        void *memory = asdMemoryAllocTraced(sizeof(Obj557b18), "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelArray.cpp", 76);
        /* A failed allocation yields the null block itself: retail keeps the allocator's r0 (cmp; blne the
         * constructor) where `: NULL` materialises a zero (79 lines) and a nothrow class operator new tests it again. */
        Obj557b18 *body = memory != NULL ? new (memory) Obj557b18() : static_cast<Obj557b18 *>(memory);
        body->attachContent(content, i);
        array->bodies.push_back(body);
    }
    array->content = content;
    std::vector<Obj557b18 *>::iterator end = array->bodies.end();
    for (std::vector<Obj557b18 *>::iterator it = array->bodies.begin(); it != end; ++it) {
        Obj557b18 *body = *it;
        u32 name = FUN_003fdadc(body);
        u16 index = ownerSlotSetText(body, name);
        if (index != MODEL_MOTION_NONE) {
            motionPlayerStartBlended(body, index, 1, 0.0f, 0.0f);
        }
        index = FUN_001a79e8(body, name);
        if (index != MODEL_MOTION_NONE) {
            moriModelUnitStartMaterialAnimation(body, index, 1, 0.0f);
        }
        index = FUN_004ffab8(body, name);
        if (index != MODEL_MOTION_NONE) {
            animationSelectClip(body, index, 1, 0.0f);
        }
    }
}
