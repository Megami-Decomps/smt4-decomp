# Encoded text final line index

`asdTextGetFinalLineIndex` traverses the encoded glyph records from the configured start,
with the native 999-record safety bound. Newline increments the zero-based index; explicit line-selection commands
replace it. It exits at either native terminator.
Other commands advance past their operands using `sentinelLookupGetValue`.
The previous raw source omitted that function's code argument and incorrectly
added the command code instead of its returned operand count.

The record owner is supported by its producer: `FUN_002869e8` allocates records
with stride 0x20, fills the existing `NwFontGlyph` at offset 4 through the font's
virtual glyph getter, and stores the texture index at 0x1C. The text counter
reads the record code, start index at 0x0C, and font-owner pointer at 0x14.

IV's text constructor allocates 0xB4 bytes. Apocalypse's corresponding constructor
allocates 0xBC and clears eight bytes starting at 0xB4. The common `AsdText`
type now describes the 0xB4 prefix, not an invented eight-entry extension table.
No consumer uses the removed opaque tail field.

This extraction is independent of the larger, still-private text-layout body
reconstruction. It does not certify that raw implementation.

The three counter callers now use the canonical declaration. Raw integer-stored
text addresses at two call boundaries are converted to pointers without
claiming that their enclosing decompiler owners have been recovered. The
related scan in `FUN_0028dcf4` had the same omitted command argument and ignored
operand-count return at its sole lookup call; that boundary is corrected too.
The rest of that raw function remains unreviewed and nonmatching.
