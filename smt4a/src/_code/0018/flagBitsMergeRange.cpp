#include "common.h"
#include "gamedata/GameDataAccess_Smt4a.h"

extern "C" {

/* Merges the flag bits 0x200..0x8000 of `*requested` into `*current`: `*current` gains the requested bits; returns the bits of that range that `*current` did not have before. */
u32 flagBitsMergeRange(u16 *requested, u16 *current)
{
    u16 want;
    u16 have;
    u16 gained;
    u32 missing;

    want = *requested;
    have = *current;
    gained = 0;
    missing = 0;
    if ((want & 0x200) != 0) {
        gained = 0x200;
    }
    if ((have & 0x200) == 0) {
        missing = 0x200;
    }
    if ((want & 0x400) != 0) {
        gained = gained | 0x400;
    }
    if ((have & 0x400) == 0) {
        missing = missing | 0x400;
    }
    if ((want & 0x800) != 0) {
        gained = gained | 0x800;
    }
    if ((have & 0x800) == 0) {
        missing = missing | 0x800;
    }
    if ((want & 0x1000) != 0) {
        gained = gained | 0x1000;
    }
    if ((have & 0x1000) == 0) {
        missing = missing | 0x1000;
    }
    if ((want & 0x2000) != 0) {
        gained = gained | 0x2000;
    }
    if ((have & 0x2000) == 0) {
        missing = missing | 0x2000;
    }
    if ((want & 0x4000) != 0) {
        gained = gained | 0x4000;
    }
    if ((have & 0x4000) == 0) {
        missing = missing | 0x4000;
    }
    if ((want & 0x8000) != 0) {
        gained = gained | 0x8000;
    }
    *current = gained | have;
    if ((have & 0x8000) == 0) {
        missing = missing | 0x8000;
    }
    return missing;
}

} /* extern "C" */
