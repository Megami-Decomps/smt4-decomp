# Selected-line measurement return contract

`FUN_00126830` forwards its text pointer and selected line index to
`FUN_002b080c` with flags 18 and four zero floating-point arguments. It is a
tail wrapper, so it forwards the callee's floating-point width result unchanged.
The caller `FUN_001189a4` consumes `s0` and converts it to a signed integer width.

The wrapper now uses the existing `font/TextLayoutApi.h` declaration, returns
`f32`, and has its own declaration in that subsystem header. Its former integer
return declaration in the unrelated default-texture header has been removed.
The caller likewise uses the canonical header. This is a source-contract
correction: the wrapper already matched because its tail branch happened to
preserve the floating-point result. It is not a newly matched function.

The raw `FUN_002b080c` implementation remains nonmatching and incompletely
recovered. In particular its omitted floating-point parameters, folded
flags/line-selection paths and missing width return require separate body recovery.
This change does not certify or repair that raw implementation.

## Line selection

The third scalar is a line index, not a character count or prefix limit. With
flag 2 set, the native body compares it with a line counter and suppresses both
drawing and width accumulation for other lines. Newline advances that counter;
an explicit line-position command replaces it. Flag 16 disables drawing while
retaining measurement, so flags 18 measure the selected line. The wrapper
caller uses the result to position each menu row's text.
