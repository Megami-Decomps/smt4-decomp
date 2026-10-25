#include "shard/W5_W5Match2_ShiftRandom.h"
#include "gfx/QuaternionWorkspace.h"
extern "C" {
extern ShiftRandomState DAT_004d9748;
/* Advance the four-word shift-register random generator. */
u32 randomAdvanceShiftRegister(ShiftRandomState *state) { if (state==NULL) state=&DAT_004d9748; u32 first=state->first,second=state->second,third=state->third,fourth=state->fourth; u32 value=((second<<2)|(first>>30))^((fourth<<1)|(third>>31)); state->second=first; state->first=value; state->third=second; state->fourth=third; return value; }
}
