#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

/* 0x288-byte battle entity record. */
typedef struct Entity0030b080 {
    u32 flags;          /* 0x000: bit 0 active, bit 4 enabled, bit 6 hidden */
    u8 unk04[0x284];
} Entity0030b080;

typedef struct BtlState0030b080 {
    /* 0x0000 */ u8 unk0000[0x1fc0];
    /* 0x1fc0 */ Entity0030b080 *entities;
} BtlState0030b080;

u32 scrGetArg(u32 index);
s32 btlEntryHasActionSkillCategory(Entity0030b080 *entity, u32 arg);
void scrSetResult(s32 value);

/* Script command: reports whether some active, enabled, visible entity accepts script argument 0 (btlEntryHasActionSkillCategory). Returns 1. */
u32 FUN_0030b080(void)
{
    u32 arg = scrGetArg(0);
    s32 i;

    for (i = 0; i < 109; i++) {
        Entity0030b080 *entity = &reinterpret_cast<BtlState0030b080 *>(btlGetMainState())->entities[i];

        if ((entity->flags & 0x10) != 0 && (entity->flags & 1) != 0 && (entity->flags & 0x40) == 0 && btlEntryHasActionSkillCategory(entity, arg) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
