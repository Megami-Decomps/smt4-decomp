#ifndef SMT4A_GAMEDATA_SKILLRESTORE_H
#define SMT4A_GAMEDATA_SKILLRESTORE_H

#include "common.h"

struct SkillDataRecordA;

/* Applies or previews a restoring skill. Returns 0 on success or 1 when it cannot apply. */
extern "C" u32 skillApplyRestoreToMember(s32 source, s32 target, const SkillDataRecordA *skill, s32 preview, s32 *amountOut);

#endif
