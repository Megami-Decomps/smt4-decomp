/* NON_MATCHING: member-pointer call sequence: retail loads both words of the handler entry first and indexes the vtable as ptr + vtbl; built loads the pointer conditionally and indexes vtbl + ptr. */
#include "common.h"

struct StepOutput0043479c;

/* A text sequence: reads one character per step and dispatches it to a member function. */
class Sequence0043479c {
public:
    typedef s32 (Sequence0043479c::*Handler)(StepOutput0043479c **output);

    virtual ~Sequence0043479c();

    /* 0x04 */ u8 unk04[8];
    /* 0x0c */ const u16 *text;
    /* 0x10 */ s32 position;
    /* 0x14 */ s32 length;
};

extern "C" s32 FUN_00434ab0(Sequence0043479c *sequence, StepOutput0043479c **output);

/* The handler of every printable character (32..126). */
extern const Sequence0043479c::Handler DAT_005c18ec[95];

/* Sequence step: advances; ends with 4 at the end of the text, otherwise runs the character's handler (other codes go to FUN_00434ab0). */
extern "C" s32 FUN_0043479c(Sequence0043479c *sequence, StepOutput0043479c **output)
{
    sequence->position++;
    if (sequence->position == sequence->length)
        return 4;
    u32 code = sequence->text[sequence->position];
    if (code - 32 <= 94)
        return (sequence->*DAT_005c18ec[code - 32])(output);
    return FUN_00434ab0(sequence, output);
}
