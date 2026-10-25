#include "ui/PartyPanelState.h"
#include "status/StatusCamera.h"

extern "C" {

int FUN_001d13b0(void);
void FUN_002b7bca(void *entries, u32 count, u32 stride, s32 (*compare)(const void *, const void *));

extern s32 FUN_0019215c(const void *left, const void *right); /* 0x19215c */
extern s32 FUN_001a81a8(const void *left, const void *right); /* 0x1a81a8 */
extern s32 FUN_001a8268(const void *left, const void *right); /* 0x1a8268 */
extern s32 FUN_001b18f0(const void *left, const void *right); /* 0x1b18f0 */
extern s32 FUN_001e1728(const void *left, const void *right); /* 0x1e1728 */
extern s32 entryCompare(const void *left, const void *right); /* 0x207230 */
extern s32 FUN_002072f0(const void *left, const void *right); /* 0x2072f0 */
extern s32 devilCompareUnitsByRaceDescending(const void *left, const void *right); /* 0x219588 */
extern s32 FUN_0025cac0(const void *left, const void *right); /* 0x25cac0 */
extern s32 devilSortCompareUnitRankRaceId(const void *left, const void *right); /* 0x25cb2c */
extern s32 FUN_00291f5c(const void *left, const void *right); /* 0x291f5c */
extern s32 comparePartyUnitsByRankRaceAndId(const void *left, const void *right); /* 0x291fc8 */
extern PartyPanelState *g_partyPanel;


void partyPanelSortEntries(void)

{
  PartyPanelState *panel;
  const u8 *sortMode;
  u8 ascending;
  
  panel = g_partyPanel;
  sortMode = reinterpret_cast<unsigned char *>(FUN_002a0d0c());
  ascending = ~(*sortMode >> 7) & 1;
  if ((*sortMode & 0x7f) == 2) {
    if (ascending != 0) {
      FUN_002b7bca(panel->sortableEntries,0x18,8,&comparePartyUnitsByRankRaceAndId);
    }
    else {
      FUN_002b7bca(panel->sortableEntries,0x18,8,&devilSortCompareUnitRankRaceId);
    }
  }
  if ((*sortMode & 0x7f) == 1) {
    if (ascending != 0) {
      FUN_002b7bca(panel->sortableEntries,0x18,8,FUN_001b18f0);
    }
    else {
      FUN_002b7bca(panel->sortableEntries,0x18,8,devilCompareUnitsByRaceDescending);
    }
  }
  if ((*sortMode & 0x7f) == 4) {
    if (ascending != 0) {
      FUN_002b7bca(panel->sortableEntries,0x18,8,FUN_00291f5c);
    }
    else {
      FUN_002b7bca(panel->sortableEntries,0x18,8,FUN_0025cac0);
    }
  }
  if ((*sortMode & 0x7f) == 5) {
    if (ascending != 0) {
      FUN_002b7bca(panel->sortableEntries,0x18,8,FUN_0019215c);
    }
    else {
      FUN_002b7bca(panel->sortableEntries,0x18,8,FUN_001e1728);
    }
  }
  if ((*sortMode & 0x7f) == 0x1f) {
    if (ascending != 0) {
      FUN_002b7bca(panel->sortableEntries,0x18,8,FUN_001a8268);
    }
    else {
      FUN_002b7bca(panel->sortableEntries,0x18,8,FUN_002072f0);
    }
  }
  if ((*sortMode & 0x7f) == 3) {
    if (ascending != 0) {
      FUN_002b7bca(panel->sortableEntries,0x18,8,&FUN_001a81a8);
    }
    else {
      FUN_002b7bca(panel->sortableEntries,0x18,8,&entryCompare);
    }
  }
  FUN_001d13b0();
  return;
}

} /* extern "C" */
