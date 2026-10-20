"""Readable forms of the mangled C++ names armcc gives functions (the ARM C++ ABI, which is the
Itanium one): `_ZN9Obj558be04stopEv` is `Obj558be0::stop()`.

Covers what this project's names use: nested names, constructors and destructors, const methods,
builtin, pointer, reference, const and class parameter types, and back-references (S_, S0_, ...).
Anything else comes back unchanged.
"""
import re

BUILTIN = {"v": "void", "b": "bool", "c": "char", "a": "signed char", "h": "unsigned char", "s": "short",
           "t": "unsigned short", "i": "int", "j": "unsigned int", "l": "long", "m": "unsigned long",
           "x": "long long", "y": "unsigned long long", "f": "float", "d": "double", "z": "..."}
STRUCTORS = {"C1": "", "C2": "", "C3": "", "D0": "~", "D1": "~", "D2": "~"}


class _Parser:
    def __init__(self, text):
        self.text, self.pos, self.subs = text, 0, []

    def peek(self, n=1):
        return self.text[self.pos:self.pos + n]

    def take(self, n=1):
        part = self.text[self.pos:self.pos + n]
        self.pos += n
        return part

    def source_name(self):
        digits = re.match(r"\d+", self.text[self.pos:])
        if not digits:
            raise ValueError
        self.pos += len(digits.group())
        return self.take(int(digits.group()))

    def substitution(self):
        self.take()  # S
        seq = re.match(r"([0-9A-Z]*)_", self.text[self.pos:])
        if not seq:
            raise ValueError
        self.pos += len(seq.group())
        index = 0 if not seq.group(1) else int(seq.group(1), 36) + 1
        return self.subs[index]

    def nested(self):
        self.take()  # N
        const = ""
        if self.peek() == "K":
            self.take()
            const = " const"
        parts = []
        while self.peek() != "E":
            if self.peek() == "S":
                parts.append(self.substitution())
            elif self.peek(2) in STRUCTORS:
                parts.append(STRUCTORS[self.take(2)] + parts[-1].split("::")[-1])
            else:
                parts.append(self.source_name())
                self.subs.append("::".join(parts))
        self.take()  # E
        return "::".join(parts), const

    def type(self):
        code = self.peek()
        if code in BUILTIN:
            self.take()
            return BUILTIN[code]
        if code in "PRK":
            self.take()
            inner = self.type()
            result = {"P": f"{inner} *", "R": f"{inner} &", "K": f"const {inner}"}[code]
            self.subs.append(result)
            return result
        if code == "S":
            return self.substitution()
        if code == "N":
            name, _ = self.nested()
            return name
        name = self.source_name()
        self.subs.append(name)
        return name


def demangle(name):
    """`Class::method(args)` for a mangled function name, or the name itself."""
    if not name.startswith("_Z"):
        return name
    parser = _Parser(name)
    parser.pos = 2
    try:
        if parser.peek() == "N":
            qualified, const = parser.nested()
        else:
            qualified, const = parser.source_name(), ""
        args = []
        while parser.pos < len(name):
            args.append(parser.type())
        if args == ["void"]:
            args = []
        return f"{qualified}({', '.join(args)}){const}"
    except (ValueError, IndexError):
        return name


def file_stem(name):
    """A file name for a function: `Obj558be0__stop` for `_ZN9Obj558be04stopEv`."""
    readable = demangle(name)
    if readable == name:
        return name
    base = readable.split("(")[0].replace("::", "__").replace("~", "dtor_")
    return re.sub(r"[^A-Za-z0-9_]", "_", base)


if __name__ == "__main__":
    for sample in ("_ZN9Obj558be04stopEv", "_ZN2nn2fs4OpenEPKci", "_ZNK5Thing5valueEv", "_ZN4BaseD1Ev",
                   "_ZN5ThingC1Ev", "_ZN4Base6updateEv", "FUN_002f30c4"):
        print(f"{sample:28} {demangle(sample):32} {file_stem(sample)}")
