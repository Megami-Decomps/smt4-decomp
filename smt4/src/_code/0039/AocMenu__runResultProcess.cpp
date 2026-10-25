/* NON_MATCHING: retail's states return through the shared epilogue with different register assignment (process in r4, g_aocMain in r6), copies the polled five-word result through ldm/stm pairs and tests the 0x66/0x67 kinds with the removed-inline gotos of the original; this build lays the cases out differently. */
#include "classes/AocMenu.h"
#include "common.h"

struct AocMenuObject;

/* The object a menu owns for its current screen: slot 1 destroys it, slot 3 reads its pending result. */
struct AocMenuObjectVtable {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*destroy)(AocMenuObject *object);
    /* 0x08 */ void *unk08;
    /* 0x0C */ void (*readResult)(AocMenuObject *object, u32 *result);
};

/* The screen object is embedded in the process; once the screen ends its place holds the result record. */
struct AocMenuObject {
    /* 0x00 */ AocMenuObjectVtable *vtable;
    /* 0x04 */ u32 result[5];
};

/* A five-word result record: the first byte is its kind (0 = none, >= 100 = a command). */
struct AocResult {
    /* 0x00 */ u32 words[5];
};

/* A script-driven menu process of the AOC part. */
struct AocMenuProcess {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u32 mode;
    /* 0x008 */ s32 phase;
    /* 0x00C */ s32 timer;
    /* 0x010 */ u8 unk010[0x1F8];
    /* 0x208 */ AocMenuObject *active;
    /* 0x20C */ u32 unk20C;
    /* 0x210 */ AocResult result;
    /* 0x224 */ u8 unk224[0x1C];
    /* 0x240 */ u8 holder[0x110];
    /* 0x350 */ void *table;
    /* 0x354 */ u8 unk354[4];
    /* 0x358 */ void *script;
};

struct AocGlobals {
    /* 0x000 */ u8 unk000[0x678];
    /* 0x678 */ u8 *units;
};

extern "C" {
extern AocGlobals *g_aocMain;

void timeInitializeActiveState(u32 *state);
void FUN_00233e70(AocMenuProcess *process, s32 unused, s32 next);
void *FUN_00233fcc(AocMenuObject *object, s32 kind);
void FUN_00234124(AocMenuProcess *process, const AocResult *request);
AocResult FUN_002341d4(AocGlobals *aoc);
s32 strIsEmpty(u32 *record);
u8 byteIsAtLeast100(u32 *record);
s32 legacyResourceIdRemap(const AocResult *record);
u32 flaggedValueHolderGetTotal(void *holder);

/* Runs one step of the menu process that reports the screen's result: phases 0-5 and 9999. */
void AocMenu::runResultProcess()
{
    AocMenuProcess * process = reinterpret_cast<AocMenuProcess *>(this);
    AocResult record;
    timeInitializeActiveState(record.words);
    AocGlobals *aoc = g_aocMain;
    switch (process->phase) {
    case 0: {
        AocMenuObject *object = (AocMenuObject *)&process->unk20C;
        FUN_00233fcc(object, 0);
        process->phase = 1;
        process->active = object;
        return;
    }
    case 1: {
        AocResult raw;
        process->active->vtable->readResult(process->active, raw.words);
        record = raw;
        if (strIsEmpty(record.words) != 0) {
            process->phase = 2;
            return;
        }
        if (byteIsAtLeast100(record.words) != 0) {
            if ((record.words[0] & 0xff) == 0x66) {
                AocResult request = record;
                FUN_00234124(process, &request);
                return;
            }
            if ((record.words[0] & 0xff) != 0x67) {
                process->phase = 9999;
                process->result = record;
                return;
            }
            process->phase = 5;
            process->timer = 3;
            return;
        }
        return;
    }
    case 2: {
        if (process->active != 0) {
            process->active->vtable->destroy(process->active);
        }
        AocMenuObject *object = (AocMenuObject *)&process->unk20C;
        FUN_00233fcc(object, 2);
        process->active = object;
        object->result[4] = *(u16 *)(aoc->units + flaggedValueHolderGetTotal(process->holder) * 0x9c8 + 0x9aa);
        process->phase = 3;
        return;
    }
    case 3: {
        AocResult raw;
        process->active->vtable->readResult(process->active, raw.words);
        record = raw;
        if (strIsEmpty(record.words) != 0) {
            AocMenuObject *object = process->active;
            process->mode = 10;
            process->phase = 0;
            if (object != 0) {
                object->vtable->destroy(object);
                process->active = 0;
            }
            return;
        }
        if (byteIsAtLeast100(record.words) != 0) {
            if ((record.words[0] & 0xff) == 0x66) {
                AocResult request = record;
                FUN_00234124(process, &request);
                return;
            }
            if ((record.words[0] & 0xff) != 0x67) {
                process->phase = 9999;
                process->result = record;
                return;
            }
            process->phase = 4;
            return;
        }
        return;
    }
    case 4: {
        AocResult remapped = FUN_002341d4(aoc);
        if (legacyResourceIdRemap(&remapped) < 0) {
            process->phase = 9999;
            process->result.words[0] = 100;
            process->result.words[1] = remapped.words[0];
            process->result.words[2] = remapped.words[1];
            return;
        }
        process->phase = 5;
        process->timer = 3;
        return;
    }
    case 5:
        process->timer--;
        if (process->timer < 1) {
            AocMenuObject *object = process->active;
            process->mode = 6;
            process->phase = 0;
            if (object != 0) {
                object->vtable->destroy(object);
                process->active = 0;
            }
        }
        return;
    case 9999:
        FUN_00233e70(process, 5, 3);
        return;
    }
}
}
