#!/usr/bin/env python3
"""Render both games' proven progress as a static site for GitHub Pages.

    python -B tools/progress_site.py [--out build/site] [--history DIR]
                                     [--repo URL] [--commit SHA] [--date ISO-8601]

Adapted from the SMT III decomp's site. Credit comes from relink, never raw objdiff: for each game
it reads `<game>/build/report.json` (objdiff, for sizes and the function list) and
`<game>/build/relink/proof.json` (written by `tools/relink.py --matched`), and refuses a proof
whose link did not match. A function is

    registered  relink linked its compiled object into a byte-identical .code;
    readable    registered, and its source has none of the decompiler's placeholders
                (FUN_/DAT_/param_N/temp_vN/...) and its own name is a real one;
    a draft     not registered, but hand-written: a NON_MATCHING note that romwright did not write.

DIR holds the previously published site's `<game>/history.json` files; the current commit is
added, replacing an entry for the same commit. Without them, the history starts from the
"Proven: IV n, Apocalypse m" lines in this repository's commit messages. Writes:

    index.html                 both games
    <game>/index.html          headline, history chart, source trees, the compendium of functions
    <game>/history.json        one entry per published commit, oldest first
    badges/<game>-functions.json, badges/<game>-code.json, badges/<game>-readable.json
                               shields.io endpoint badges

Each game's page wears that game's look, drawn in CSS and SVG from its own menus (no game assets
are copied): IV's Mincho logo on Mikado stone with gold status tabs and Burroughs green, and
Apocalypse's spray-painted red over blue-black slate with its teal tabs.
"""
from __future__ import annotations

import argparse
import html
import json
import os
import re
import subprocess
import sys
from datetime import datetime
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent

GAMES = {
    "smt4": {"title": "Shin Megami Tensei IV", "short": "IV", "theme": "iv",
             "build": "v1.2.0 update · CTR-U-AMXE", "badge": "f2a51a"},
    "smt4a": {"title": "Shin Megami Tensei IV: Apocalypse", "short": "Apocalypse", "theme": "apoc",
              "build": "v1.0 cartridge · CTR-P-BG4E", "badge": "b81212"},
}
PROVEN_LINE = re.compile(r"Proven:\s*IV ([\d,]+),\s*Apocalypse ([\d,]+)")

PLACEHOLDER = re.compile(r"\b(?:FUN|DAT|LAB|PTR|s)_[0-9a-fA-F]{6,8}\b|\b(?:param|temp_v|local|in_|unaff_)\w*\d\b"
                         r"|\b[a-z]{1,2}Var\d+\b|\bundefined\d?\b")
COMMENT = re.compile(r"/\*.*?\*/|//[^\n]*", re.S)


def git(*args: str) -> str:
    return subprocess.run(["git", *args], cwd=ROOT, check=True, capture_output=True, text=True).stdout.strip()


def number(value: int) -> str:
    return f"{value:,}"


def percent(part: int, whole: int) -> float:
    return 100.0 * part / whole if whole else 0.0


# --------------------------------------------------------------------------- data


def load_game(game: str) -> dict:
    build = ROOT / game / "build"
    try:
        report = json.loads((build / "report.json").read_text())
        proof = json.loads((build / "relink" / "proof.json").read_text())
    except FileNotFoundError as error:
        sys.exit(f"{error.filename} is missing: run `python -B build.py report` and "
                 f"`python -B tools/relink.py --matched` in {game}/ first")
    if not proof["match"]:
        sys.exit(f"{game}: the last relink did not match retail; nothing can be credited")
    proven = set(proof["proven"])
    functions = []
    for unit in report["units"]:
        source = unit["metadata"]["source_path"]
        folder = Path(source).parent.as_posix().removeprefix("src/_code/")
        path = ROOT / game / source
        text = path.read_text(encoding="utf-8") if path.exists() else ""
        head = text.lstrip()[:200]
        draft = head.startswith("/* NON_MATCHING:") and "romwright" not in head.split("*/")[0]
        for function in unit.get("functions", []):
            name = function["name"]
            registered = name in proven
            readable = registered and not name.startswith("FUN_") and not PLACEHOLDER.search(COMMENT.sub("", text))
            functions.append({
                "name": name,
                "size": int(function.get("size", 0)),
                "folder": folder,
                "state": "readable" if readable else "registered" if registered else "draft" if draft else "todo",
            })
    return {"functions": functions, "proven": proven}


def totals(functions: list[dict]) -> dict:
    registered = [f for f in functions if f["state"] in ("registered", "readable")]
    return {
        "total_functions": len(functions),
        "total_code": sum(f["size"] for f in functions),
        "matched_functions": len(registered),
        "matched_code": sum(f["size"] for f in registered),
        "readable_functions": sum(f["state"] == "readable" for f in functions),
        "drafts": sum(f["state"] == "draft" for f in functions),
    }


def twin_pairs() -> list[dict]:
    """Functions with the same code in both games, from tools/shared.py."""
    out = ROOT / "build" / "shared.json"
    out.parent.mkdir(exist_ok=True)
    subprocess.run([sys.executable, "-B", str(ROOT / "tools" / "shared.py"), "--json", str(out)],
                   cwd=ROOT, check=True, capture_output=True)
    return json.loads(out.read_text())


def category(folder: str) -> str:
    return "Not yet placed in a source file" if re.fullmatch(r"[0-9a-f]{4}", folder) else folder.split("/")[0]


def merge_history(history: list[dict], entry: dict) -> list[dict]:
    merged = [item for item in history if item["commit"] != entry["commit"]]
    merged.append(entry)
    merged.sort(key=lambda item: datetime.fromisoformat(item["date"]))
    return merged


def seed_history(game: str, total: int) -> list[dict]:
    """The proven counts this repository's commits recorded, oldest first (functions only)."""
    log = git("log", "--format=%H%x1f%cI%x1f%B%x1e")
    seeded = []
    for record in log.split("\x1e"):
        parts = record.strip().split("\x1f")
        if len(parts) < 3:
            continue
        found = PROVEN_LINE.search(parts[2])
        if found:
            count = int(found.group(1 if game == "smt4" else 2).replace(",", ""))
            seeded.append({"commit": parts[0], "date": parts[1], "matched_functions": count, "total_functions": total})
    return sorted(seeded, key=lambda item: datetime.fromisoformat(item["date"]))


def badge(label: str, part: int, whole: int, color: str) -> dict:
    return {"schemaVersion": 1, "label": label, "message": f"{percent(part, whole):.2f}%", "color": color}


# --------------------------------------------------------------------------- pieces


def meter(part: int, whole: int) -> str:
    return f'<span class="meter"><span style="width:{percent(part, whole):.3f}%"></span></span>'


def chart(history: list[dict]) -> str:
    """Inline SVG of the share of functions (and, where recorded, code bytes) registered over time."""
    if len(history) < 2:
        return f'<p class="note">The chart starts once a second commit is published.</p>'
    width, height, left, right, top, bottom = 900, 240, 48, 12, 14, 30
    times = [datetime.fromisoformat(item["date"]).timestamp() for item in history]
    functions = [percent(i["matched_functions"], i["total_functions"]) for i in history]
    code = [(t, percent(i["matched_code"], i["total_code"])) for t, i in zip(times, history) if i.get("total_code")]
    ceiling = max(10, -(-max(functions + [v for _, v in code]) // 10) * 10)
    span = (times[-1] - times[0]) or 1.0

    def x(t: float) -> float:
        return left + (t - times[0]) / span * (width - left - right)

    def y(v: float) -> float:
        return top + (1 - v / ceiling) * (height - top - bottom)

    parts = [f'<svg class="chart" viewBox="0 0 {width} {height}" role="img" aria-label="Share registered over time">']
    for step in range(0, int(ceiling) + 1, max(1, int(ceiling) // 5)):
        parts.append(f'<line class="grid" x1="{left}" x2="{width - right}" y1="{y(step):.1f}" y2="{y(step):.1f}"/>'
                     f'<text x="{left - 8}" y="{y(step) + 4:.1f}" text-anchor="end">{step}%</text>')
    for label, when, anchor in ((history[0]["date"], times[0], "start"), (history[-1]["date"], times[-1], "end")):
        parts.append(f'<text x="{x(when):.1f}" y="{height - 8}" text-anchor="{anchor}">{html.escape(label[:10])}</text>')
    parts.append(f'<polyline class="functions" points="{" ".join(f"{x(t):.1f},{y(v):.1f}" for t, v in zip(times, functions))}"/>')
    for t, v in zip(times, functions):
        parts.append(f'<circle class="functions" cx="{x(t):.1f}" cy="{y(v):.1f}" r="4"/>')
    if len(code) >= 2:
        parts.append(f'<polyline class="code" points="{" ".join(f"{x(t):.1f},{y(v):.1f}" for t, v in code)}"/>')
    parts.append("</svg>")
    return "".join(parts)


def link(repo: str | None, commit: str, path: str, text: str) -> str:
    if not repo:
        return html.escape(text)
    return f'<a href="{html.escape(repo)}/blob/{commit}/{html.escape(path)}">{html.escape(text)}</a>'


def nav(current: str, prefix: str, repo: str | None) -> str:
    links = [f'<a href="{prefix}{game}/"{" aria-current=page" if game == current else ""}>{info["short"]}</a>'
             for game, info in GAMES.items()]
    if repo:
        links.append(f'<a href="{html.escape(repo)}/blob/master/docs/CONTRIBUTING.md">Contribute</a>')
        links.append(f'<a href="{html.escape(repo)}">Source</a>')
    return f'<header class="bar"><a class="mark" href="{prefix}">SMT IV decomp</a><nav>{"".join(links)}</nav></header>'


def logo(game: str) -> str:
    """Each game's title treatment, set in type: IV's Mincho logo; Apocalypse's sprayed name."""
    if GAMES[game]["theme"] == "iv":
        return ('<div class="logo-iv" role="img" aria-label="Shin Megami Tensei IV">'
                '<span class="jp">真・女神転生</span><span class="numeral">IV</span>'
                '<span class="en">Shin Megami Tensei</span></div>')
    return APOCALYPSE_LOGO


def _splatter() -> str:
    """Spray-paint speckles around the streak: a fixed pseudo-random pattern (the page never changes
    between builds of the same data)."""
    seed, dots = 20141, []

    def rand() -> float:
        nonlocal seed
        seed = (seed * 1103515245 + 12345) & 0x7FFFFFFF
        return seed / 0x7FFFFFFF

    for _ in range(320):
        x = 110 + rand() * 820
        spread = 80 + 50 * (1 - abs(x - 480) / 420)
        y = 200 - (x - 480) * 0.12 + (rand() - 0.5) * 2 * spread * (0.35 + rand())
        r = 0.8 + rand() ** 3 * 9
        dots.append(f'<circle cx="{x:.0f}" cy="{y:.0f}" r="{r:.1f}" opacity="{0.55 + rand() * 0.45:.2f}"/>')
    return "".join(dots)


# After the Apocalypse logo: silver condensed caps over a red spray streak, the name brushed in black,
# its A inside a sprayed anarchy ring. Drawn in SVG; no game asset is copied.
APOCALYPSE_LOGO = (
    '<div class="logo-apoc" role="img" aria-label="Shin Megami Tensei IV: Apocalypse">'
    '<svg viewBox="0 0 960 300" aria-hidden="true">'
    '<defs>'
    '<filter id="apoc-splash" x="-10%" y="-30%" width="120%" height="160%">'
    '<feTurbulence type="fractalNoise" baseFrequency="0.035 0.09" numOctaves="4" seed="7" result="n"/>'
    '<feDisplacementMap in="SourceGraphic" in2="n" scale="46" xChannelSelector="R" yChannelSelector="G" result="d"/>'
    '<feGaussianBlur in="d" stdDeviation="1.2"/></filter>'
    '<filter id="apoc-brush" x="-5%" y="-10%" width="110%" height="120%">'
    '<feTurbulence type="fractalNoise" baseFrequency="0.9" numOctaves="2" seed="3" result="n"/>'
    '<feDisplacementMap in="SourceGraphic" in2="n" scale="5"/></filter>'
    '</defs>'
    '<g fill="#c3121b" filter="url(#apoc-splash)">'
    '<path d="M140 238 C 230 170, 400 132, 590 124 C 720 118, 830 94, 905 62 C 890 112, 820 158, 720 192'
    ' C 600 232, 420 268, 230 280 C 170 282, 128 262, 140 238 Z"/>'
    '<ellipse cx="275" cy="205" rx="165" ry="74"/><ellipse cx="520" cy="196" rx="270" ry="64"/>'
    '<ellipse cx="760" cy="168" rx="150" ry="44"/>'
    '</g>'
    f'<g fill="#c3121b">{_splatter()}</g>'
    '<text x="470" y="78" text-anchor="middle" class="apoc-title" textLength="560" lengthAdjust="spacingAndGlyphs">'
    'SHIN MEGAMI TENSEI Ⅳ</text>'
    '<g filter="url(#apoc-brush)">'
    '<circle cx="250" cy="192" r="66" fill="none" stroke="#0d0d0d" stroke-width="17"/>'
    '<text x="250" y="232" text-anchor="middle" class="apoc-a">A</text>'
    '<text x="322" y="230" class="apoc-name" textLength="520" lengthAdjust="spacingAndGlyphs">pocalypse</text>'
    '</g></svg></div>')


FILTERS = ('<svg width="0" height="0" style="position:absolute" aria-hidden="true"><defs>'
           '<filter id="spray" x="-5%" y="-20%" width="110%" height="140%">'
           '<feTurbulence type="fractalNoise" baseFrequency="0.75" numOctaves="2" seed="4" result="noise"/>'
           '<feDisplacementMap in="SourceGraphic" in2="noise" scale="4"/></filter></defs></svg>')


def footer() -> str:
    return ('<footer><p class="mark-large">SMT IV decomp</p>'
            '<p>A binary reconstruction and analysis project for understanding and documenting how the '
            'games work. It is not a port, and you cannot play the games with it: building needs your own '
            'copy of each game. Shin Megami Tensei is a trademark of Atlus; this project is not affiliated '
            'with Atlus or SEGA.</p></footer>')


# --------------------------------------------------------------------------- pages


def game_page(game: str, data: dict, history: list[dict], twins: dict, repo: str | None,
              commit: str, date: str) -> str:
    info = GAMES[game]
    t = totals(data["functions"])
    commit_text = html.escape(commit[:12])
    if repo:
        commit_text = f'<a href="{html.escape(repo)}/commit/{commit}">{commit_text}</a>'
    unregistered = t["total_functions"] - t["matched_functions"]

    status = [
        ("Code", f'{percent(t["matched_code"], t["total_code"]):.2f}%', meter(t["matched_code"], t["total_code"]),
         f'{number(t["matched_code"])} of {number(t["total_code"])} bytes registered'),
        ("Readable", number(t["readable_functions"]), meter(t["readable_functions"], t["matched_functions"]),
         f'of {number(t["matched_functions"])} registered functions meet the readability standard'),
        ("Drafts", number(t["drafts"]), meter(t["drafts"], unregistered),
         f'hand-written but not yet matching, of {number(unregistered)} unregistered; credited as none'),
        ("Twins", number(twins["both"]), meter(twins["both"], twins["pairs"]),
         f'of {number(twins["pairs"])} functions shared with the other game are registered in both'),
    ]
    status_html = "".join(f'<div class="stat"><p class="tab">{label}</p><p class="figure">{figure}</p>{bar}'
                          f'<p class="note">{note}</p></div>' for label, figure, bar, note in status)

    groups: dict[str, list[dict]] = {}
    for f in data["functions"]:
        groups.setdefault(category(f["folder"]), []).append(f)
    rows = []
    for name, members in sorted(groups.items(), key=lambda kv: (kv[0].startswith("Not yet"), kv[0].lower())):
        m = totals(members)
        rows.append(f'<tr><td>{html.escape(name)}</td><td class="num">{number(m["total_functions"])}</td>'
                    f'<td>{meter(m["matched_functions"], m["total_functions"])}</td>'
                    f'<td class="num">{number(m["matched_functions"])}</td>'
                    f'<td class="num">{number(m["readable_functions"])}</td>'
                    f'<td class="num">{percent(m["matched_code"], m["total_code"]):.1f}%</td></tr>')
    rows.append(f'<tr class="total"><td>Whole game</td><td class="num">{number(t["total_functions"])}</td>'
                f'<td>{meter(t["matched_functions"], t["total_functions"])}</td>'
                f'<td class="num">{number(t["matched_functions"])}</td>'
                f'<td class="num">{number(t["readable_functions"])}</td>'
                f'<td class="num">{percent(t["matched_code"], t["total_code"]):.1f}%</td></tr>')

    folders: dict[str, list[dict]] = {}
    for f in data["functions"]:
        folders.setdefault(f["folder"], []).append(f)
    entries = []
    for folder, members in sorted(folders.items()):
        m = totals(members)
        share = percent(m["matched_functions"], m["total_functions"])
        label = f"0x{folder}xxxx" if re.fullmatch(r"[0-9a-f]{4}", folder) else folder
        states = " ".join(sorted({f["state"] for f in members}))
        items = "".join(
            f'<li class="{f["state"]}"><code>{html.escape(f["name"])}</code><span>{number(f["size"])}</span></li>'
            for f in sorted(members, key=lambda f: f["name"]))
        names = " ".join(f["name"].lower() for f in members)
        directory = f"src/_code/{folder}"
        entries.append(
            f'<details data-name="{html.escape(label.lower())} {html.escape(names)}" data-share="{share:.4f}" '
            f'data-size="{m["total_code"]}" data-states="{states}"><summary>'
            f'<span class="name">{html.escape(label)}</span>'
            f'<span>{meter(m["matched_functions"], m["total_functions"])}</span>'
            f'<span class="num">{number(m["matched_functions"])} / {number(m["total_functions"])}</span>'
            f'<span class="num">{number(m["readable_functions"])}</span></summary>'
            f'<p>{link(repo, commit, f"{game}/{directory}", f"{game}/{directory}/")}</p>'
            f'<ul class="entries">{items}</ul></details>')

    return PAGE.format(
        theme=info["theme"], title=html.escape(info["title"]), filters=FILTERS,
        nav=nav(game, "../", repo), logo=logo(game),
        build=html.escape(info["build"]),
        registered=number(t["matched_functions"]), total=number(t["total_functions"]),
        share=f'{percent(t["matched_functions"], t["total_functions"]):.2f}',
        hero_meter=meter(t["matched_functions"], t["total_functions"]),
        commit=commit_text, date=html.escape(date[:10]),
        status=status_html, chart=chart(history),
        categories="".join(rows), entries="".join(entries), folder_count=number(len(folders)),
        footer=footer(),
    )


def index_page(games: dict, repo: str | None, commit: str, date: str) -> str:
    halves = []
    for game, data in games.items():
        info, t = GAMES[game], totals(data["functions"])
        halves.append(
            f'<a class="half theme-{info["theme"]}" href="{game}/">{logo(game)}'
            f'<p class="figure">{number(t["matched_functions"])}<span> / {number(t["total_functions"])}</span></p>'
            f'{meter(t["matched_functions"], t["total_functions"])}'
            f'<p>functions registered: {percent(t["matched_functions"], t["total_functions"]):.2f}% of the game, '
            f'{percent(t["matched_code"], t["total_code"]):.2f}% of its code bytes, '
            f'{number(t["readable_functions"])} readable.</p>'
            f'<p class="go">Open the compendium</p></a>')
    commit_text = html.escape(commit[:12])
    if repo:
        commit_text = f'<a href="{html.escape(repo)}/commit/{commit}">{commit_text}</a>'
    return INDEX.format(nav=nav("", "", repo), halves="".join(halves), commit=commit_text, filters=FILTERS,
                        date=html.escape(date[:10]), footer=footer())


# --------------------------------------------------------------------------- style

# Stone and slate: the menus' noise backgrounds, regenerated as SVG turbulence.
STONE = ("url(\"data:image/svg+xml;utf8,<svg xmlns='http://www.w3.org/2000/svg' width='320' height='320'>"
         "<filter id='n'><feTurbulence type='fractalNoise' baseFrequency='0.55' numOctaves='4' seed='3'/>"
         "<feColorMatrix values='0 0 0 0 0.55  0 0 0 0 0.55  0 0 0 0 0.55  0 0 0 0.42 0'/></filter>"
         "<rect width='100%' height='100%' filter='url(%23n)'/></svg>\")")
SLATE = ("url(\"data:image/svg+xml;utf8,<svg xmlns='http://www.w3.org/2000/svg' width='360' height='360'>"
         "<filter id='n'><feTurbulence type='fractalNoise' baseFrequency='0.38' numOctaves='5' seed='11'/>"
         "<feColorMatrix values='0 0 0 0 0.33  0 0 0 0 0.40  0 0 0 0 0.45  0 0 0 0.6 0'/></filter>"
         "<rect width='100%' height='100%' filter='url(%23n)'/></svg>\")")

STYLE = """
* { box-sizing: border-box; }
html { background: #000; }
body { margin: 0; color: var(--ink); background: var(--ground) var(--texture); font: 17px/1.55 "Segoe UI", system-ui, sans-serif;
  color-scheme: dark; }
a { color: inherit; }
a:focus-visible, summary:focus-visible, input:focus-visible, select:focus-visible {
  outline: 3px solid var(--hot); outline-offset: 2px; }
code { font: 0.86em/1.4 ui-monospace, "Cascadia Mono", Consolas, monospace; }

/* the two themes, from each game's own menus */
.theme-iv { --ground: #1c1c1e; --texture: STONE_TEXTURE; --panel: rgba(12, 12, 14, 0.78); --panel-2: rgba(12, 12, 14, 0.9);
  --ink: #f4f2ec; --muted: #b9b5ab; --hot: #f2a51a; --tab: #7b3fc0; --ok: #95e63c; --read: #f2a51a; --bar: #f2a51a; }
.theme-apoc { --ground: #0c1418; --texture: SLATE_TEXTURE; --panel: rgba(4, 9, 12, 0.8); --panel-2: rgba(4, 9, 12, 0.92);
  --ink: #f3f3f1; --muted: #9aa6aa; --hot: #b81212; --tab: #2a8a9a; --ok: #8cc63f; --read: #3fc6d8; --bar: #8cc63f; }

.bar { display: flex; align-items: center; justify-content: space-between; gap: 24px; padding: 16px 32px;
  background: rgba(0, 0, 0, 0.72); }
.mark { font-weight: 800; font-style: italic; letter-spacing: -0.01em; text-decoration: none; font-size: 1.1em; }
nav { display: flex; gap: 22px; }
nav a { text-decoration: none; color: var(--muted); font-weight: 700; font-style: italic; }
nav a:hover, nav a[aria-current] { color: var(--ink); }

/* IV: the logo's Mincho, the huge serif numeral, the flared caps beneath */
.logo-iv { display: inline-grid; grid-template-columns: auto auto; align-items: end; column-gap: 0.04em; color: #fff;
  font-size: clamp(2.6rem, 6.4vw, 6rem); line-height: 1; }
.logo-iv .jp { font-family: "Noto Serif JP", "Yu Mincho", "Hiragino Mincho ProN", "MS Mincho", serif;
  font-weight: 900; white-space: nowrap; font-feature-settings: "palt"; letter-spacing: -0.02em; grid-row: 1; padding-bottom: 0.08em; }
.logo-iv .numeral { font-family: "Noto Serif JP", "Times New Roman", serif; font-weight: 700; font-size: 2.35em; line-height: 0.74;
  grid-row: 1 / span 2; grid-column: 2; letter-spacing: -0.06em; }
.logo-iv .en { grid-row: 2; font-family: "Cinzel", "Copperplate Gothic Bold", "Trajan Pro", Georgia, serif; font-weight: 700; font-size: 0.29em; letter-spacing: 0.16em; padding-top: 0.25em; white-space: nowrap; }

/* Apocalypse: silver condensed caps over a red spray streak, the name brushed in black */
.logo-apoc { display: block; width: min(100%, 760px); }
.logo-apoc svg { display: block; width: 100%; height: auto; overflow: visible; }
.logo-apoc .apoc-title { font-family: "Bodoni Moda", "Bodoni MT Condensed", "Didot", serif; font-weight: 500;
  font-size: 64px; fill: #e9e9e9; stroke: #151515; stroke-width: 3px; paint-order: stroke; }
.logo-apoc .apoc-name { font-family: "Knewave", "Permanent Marker", "Segoe Script", cursive; font-size: 132px;
  fill: #0d0d0d; stroke: rgba(255, 255, 255, 0.55); stroke-width: 2px; paint-order: stroke; }
.logo-apoc .apoc-a { font-family: "Permanent Marker", "Knewave", cursive; font-size: 118px; fill: #f2f2f2;
  stroke: #0d0d0d; stroke-width: 8px; paint-order: stroke; }

.hero { padding: 48px 32px 56px; background: rgba(0, 0, 0, 0.35); display: grid; grid-template-columns: minmax(0, 1.15fr) minmax(320px, 0.85fr);
  gap: 40px 56px; align-items: end; }
.hero .status { grid-template-columns: 1fr 1fr; align-self: stretch; align-content: end; }
.hero .figure { margin: 36px 0 0; font-weight: 900; font-style: italic; line-height: 0.85; letter-spacing: -0.03em;
  font-size: clamp(3.6rem, 11vw, 9rem); }
.hero .figure span { font-size: 0.3em; letter-spacing: 0; font-style: italic; color: var(--muted); }
.theme-apoc .hero .figure { filter: url(#spray); }
.hero .meter { display: block; width: min(100%, 760px); height: 12px; margin-top: 22px; }
.hero p.lead { max-width: 60ch; margin: 18px 0 0; font-size: 1.1em; }

main { padding: 0 32px; }
section { margin: 104px 0; }
.heading { display: flex; align-items: center; gap: 14px; margin: 0 0 14px; }
.heading h2 { margin: 0; font-size: clamp(1.6rem, 3vw, 2.4rem); font-weight: 800; font-style: italic; letter-spacing: -0.02em; }
.heading .tab { background: var(--tab); color: #fff; font-weight: 700; font-style: italic; padding: 2px 14px; border-radius: 3px;
  font-size: 0.95em; }
section > p { max-width: 64ch; margin: 0 0 24px; }
.note { color: var(--muted); }

/* status panel, after the games' status screens: a coloured tab, a big italic figure, a bar */
.status { display: grid; grid-template-columns: repeat(auto-fit, minmax(230px, 1fr)); background: var(--panel); }
.stat { padding: 22px 24px 24px; }
.stat:nth-child(even) { background: rgba(255, 255, 255, 0.035); }
.stat .tab { display: inline-block; margin: 0; padding: 1px 12px; font-weight: 800; font-style: italic;
  color: #141414; background: var(--hot); border-radius: 2px; }
.theme-apoc .stat .tab { background: var(--bar); color: #071006; }
.stat .figure { margin: 10px 0 12px; font-size: 2.9rem; font-weight: 900; font-style: italic; line-height: 1; }
.theme-apoc .stat .figure { filter: url(#spray); }
.stat .note { margin: 12px 0 0; font-size: 0.93em; }
.meter { display: inline-block; width: 140px; height: 9px; background: rgba(255, 255, 255, 0.14); vertical-align: middle;
  overflow: hidden; transform: skewX(-24deg); }
.stat .meter { display: block; width: 100%; }
.meter span { display: block; height: 100%; background: var(--bar); }
.theme-iv .meter span { background: var(--hot); }

.chart { width: 100%; height: auto; display: block; background: var(--panel); }
.chart text { fill: var(--muted); font-size: 12px; font-style: italic; }
.chart .grid { stroke: rgba(255, 255, 255, 0.08); }
.chart polyline { fill: none; stroke-width: 3; }
.chart .functions { stroke: var(--ok); fill: none; }
.chart circle.functions { fill: var(--ok); }
.chart .code { stroke: var(--ink); }

table { border-collapse: collapse; width: 100%; background: var(--panel); }
th, td { text-align: left; padding: 9px 14px; border-bottom: 1px solid rgba(255, 255, 255, 0.06); }
th { font-weight: 700; font-style: italic; color: var(--muted); }
.total td { font-weight: 800; background: rgba(255, 255, 255, 0.05); }
.num { text-align: right; font-variant-numeric: tabular-nums; white-space: nowrap; }

.controls { display: flex; gap: 10px; flex-wrap: wrap; margin: 0 0 14px; }
input, select { font: inherit; color: var(--ink); background: var(--panel-2); border: 1px solid rgba(255, 255, 255, 0.14);
  padding: 9px 14px; min-width: 220px; }
.compendium .head, .compendium summary { display: grid; grid-template-columns: 1fr 160px 120px 90px; gap: 12px;
  padding: 9px 14px; }
.compendium .head { color: #fff; font-weight: 700; font-style: italic; background: var(--tab); }
.compendium details { background: var(--panel); }
.compendium details:nth-child(even) { background: var(--panel-2); }
.compendium details[open] { outline: 1px solid var(--tab); }
.compendium summary { cursor: pointer; font-style: italic; }
.compendium .name { overflow: hidden; text-overflow: ellipsis; white-space: nowrap; font-weight: 600; }
.compendium details > p { margin: 4px 14px 10px; }
.entries { columns: 3 300px; margin: 0; padding: 0 14px 16px; list-style: none; }
.entries li { display: flex; justify-content: space-between; gap: 12px; break-inside: avoid; padding: 1px 0; }
.entries li span { color: var(--muted); font-variant-numeric: tabular-nums; }
.todo code { color: var(--muted); }
.draft code { color: var(--ink); }
.registered code { color: var(--ok); }
.readable code { color: #111; background: var(--read); padding: 0 4px; }
.legend { display: flex; flex-wrap: wrap; gap: 8px 24px; margin: 0 0 18px; padding: 0; list-style: none; color: var(--muted); }
.legend code { padding: 0 4px; }

footer { padding: 88px 32px 48px; background: rgba(0, 0, 0, 0.6); margin-top: 140px; }
footer p { max-width: 72ch; color: var(--muted); }
footer .mark-large { font-size: clamp(3rem, 10vw, 9rem); font-weight: 900; font-style: italic; letter-spacing: -0.04em;
  line-height: 0.85; color: var(--ink); margin: 0 0 28px; max-width: none; }

/* landing: the two games side by side, each in its own look */
.intro { padding: 44px 32px 36px; max-width: 980px; }
.intro p { font-size: 1.3em; line-height: 1.4; margin: 0 0 12px; }
.intro p.note { font-size: 1em; }
.halves { display: grid; grid-template-columns: 1fr 1fr; min-height: 76vh; }
.half { display: flex; flex-direction: column; justify-content: flex-end; gap: 6px; padding: 56px 40px 48px;
  text-decoration: none; color: var(--ink); background: var(--ground) var(--texture); transition: filter 160ms ease; }
.half:hover { filter: brightness(1.12); }
.half .logo-iv, .half .logo-apoc { margin-bottom: auto; }
.half .logo-iv { font-size: clamp(2rem, 4.4vw, 4.2rem); }
.half .logo-apoc { width: min(100%, 620px); }
.half .figure { margin: 48px 0 6px; font-size: clamp(3.2rem, 7.5vw, 7rem); font-weight: 900; font-style: italic;
  line-height: 0.85; letter-spacing: -0.03em; }
.half.theme-apoc .figure { filter: url(#spray); }
.half .figure span { font-size: 0.32em; color: var(--muted); letter-spacing: 0; }
.half .meter { width: min(100%, 520px); height: 10px; margin: 6px 0 10px; }
.half p { margin: 0; max-width: 46ch; }
.half .go { margin-top: 22px; font-weight: 800; font-style: italic; color: var(--hot); }
.half.theme-apoc .go { color: #ff4d4d; }

@media (max-width: 960px) { .hero { grid-template-columns: 1fr; } }
@media (max-width: 760px) {
  .bar { padding: 12px 16px; } nav { gap: 12px; } main, .hero, .intro, footer { padding-left: 16px; padding-right: 16px; }
  .halves { grid-template-columns: 1fr; } .half { min-height: 70vh; padding: 40px 16px; }
  .compendium .head, .compendium summary { grid-template-columns: 1fr 90px 70px; }
  .compendium summary > :nth-child(2), .compendium .head > :nth-child(2) { display: none; }
  section { margin: 72px 0; }
}
@media (prefers-reduced-motion: reduce) { .half { transition: none; } }
""".replace("STONE_TEXTURE", STONE).replace("SLATE_TEXTURE", SLATE)

FONTS = '<link rel="preconnect" href="https://fonts.googleapis.com"><link rel="preconnect" href="https://fonts.gstatic.com" crossorigin><link href="https://fonts.googleapis.com/css2?family=Noto+Serif+JP:wght@700;900&family=Cinzel:wght@600;700&family=Bodoni+Moda:wght@500&family=Permanent+Marker&family=Knewave&display=swap" rel="stylesheet">'
ESCAPED = STYLE.replace("{", "{{").replace("}", "}}")

PAGE = """<!doctype html>
<html lang="en">
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>{title} decompilation progress</title>
""" + FONTS + """
<style>""" + ESCAPED + """</style>
</head>
<body class="theme-{theme}">
{filters}
{nav}
<div class="hero">
<div>
{logo}
<p class="figure">{registered}<span> / {total} functions</span></p>
{hero_meter}
<p class="lead">{share}% of the game's functions are registered: their source compiles to the retail
bytes and relinks into a byte-identical executable. {build} · commit {commit} · {date}.</p>
</div>
<div class="status">{status}</div>
</div>
<main>
<section>
<div class="heading"><h2>History</h2></div>
<p class="note">Share of functions registered, at each commit that recorded it.</p>
{chart}
</section>
<section>
<div class="heading"><h2>Source trees</h2></div>
<p>Functions are filed under the original source file their asserts and data place them in; the rest
wait in address-numbered folders until someone finds their file.</p>
<table>
<thead><tr><th>Tree</th><th class="num">Functions</th><th>Registered</th><th class="num">Registered</th>
<th class="num">Readable</th><th class="num">Code bytes</th></tr></thead>
<tbody>{categories}</tbody>
</table>
</section>
<section>
<div class="heading"><h2>Function</h2><span class="tab">Compendium</span></div>
<p>Every function in the game, by folder: {folder_count} folders. Search for a function or a file, or
show only the folders with work left.</p>
<ul class="legend">
<li class="readable"><code>readable</code> registered and written to the readability standard</li>
<li class="registered"><code>registered</code> proven by relink</li>
<li class="draft"><code>draft</code> hand-written, not yet matching</li>
<li class="todo"><code>todo</code> the decompiler's first pass</li>
</ul>
<div class="controls">
<input id="filter" type="search" placeholder="Search functions or files" aria-label="Search functions or files">
<select id="show" aria-label="Show folders">
<option value="">All folders</option>
<option value="todo">With work left</option>
<option value="draft">With drafts</option>
<option value="readable">With readable functions</option>
</select>
<select id="sort" aria-label="Sort folders">
<option value="name">Sort by name</option>
<option value="share">Sort by share registered</option>
<option value="size">Sort by size</option>
</select>
</div>
<div class="compendium">
<div class="head"><span>Folder</span><span>Registered</span><span class="num">Functions</span><span class="num">Readable</span></div>
<div id="entries">{entries}</div>
</div>
</section>
</main>
{footer}
<script>
const list = document.getElementById("entries");
const filter = document.getElementById("filter");
const show = document.getElementById("show");
function apply() {{
  const text = filter.value.toLowerCase();
  const state = show.value;
  for (const entry of list.children) {{
    entry.hidden = !entry.dataset.name.includes(text) || (state && !entry.dataset.states.split(" ").includes(state));
  }}
}}
filter.addEventListener("input", apply);
show.addEventListener("change", apply);
document.getElementById("sort").addEventListener("change", (event) => {{
  const key = event.target.value;
  const entries = [...list.children];
  entries.sort(key === "name"
    ? (a, b) => a.dataset.name.localeCompare(b.dataset.name)
    : (a, b) => Number(b.dataset[key]) - Number(a.dataset[key]));
  list.append(...entries);
}});
</script>
</body>
</html>
"""

INDEX = """<!doctype html>
<html lang="en">
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>Shin Megami Tensei IV decompilation progress</title>
""" + FONTS + """
<style>""" + ESCAPED + """</style>
</head>
<body class="theme-iv" style="background:#000">
{filters}
{nav}
<div class="intro">
<p>A matching decompilation of Shin Megami Tensei IV and IV: Apocalypse for Nintendo 3DS, rebuilt
from the retail binaries one function at a time with the compiler Atlus used.</p>
<p class="note">Commit {commit} · {date}. Both games come from one build tree, so most functions
are found twice.</p>
</div>
<div class="halves">{halves}</div>
{footer}
</body>
</html>
"""


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("--out", type=Path, default=ROOT / "build" / "site")
    parser.add_argument("--history", type=Path, help="directory holding the published <game>/history.json files")
    parser.add_argument("--repo", default=os.environ.get("GITHUB_REPOSITORY") and
                        f"{os.environ.get('GITHUB_SERVER_URL', 'https://github.com')}/{os.environ['GITHUB_REPOSITORY']}",
                        help="repository URL for source links (default: from GitHub Actions)")
    parser.add_argument("--commit", help="commit the reports were built from (default: HEAD)")
    parser.add_argument("--date", help="commit date, ISO 8601 (default: the commit's date)")
    args = parser.parse_args()
    commit = args.commit or git("rev-parse", "HEAD")
    date = args.date or git("show", "-s", "--format=%cI", commit)

    games = {game: load_game(game) for game in GAMES}
    pairs = twin_pairs()
    out = args.out
    (out / "badges").mkdir(parents=True, exist_ok=True)
    for game, data in games.items():
        other = next(g for g in GAMES if g != game)
        both = sum(1 for p in pairs
                   if p[game]["function"] in data["proven"] and p[other]["function"] in games[other]["proven"])
        t = totals(data["functions"])
        previous = args.history / game / "history.json" if args.history else None
        history = (json.loads(previous.read_text()) if previous and previous.exists()
                   else seed_history(game, t["total_functions"]))
        history = merge_history(history, {"commit": commit, "date": date, **t})
        (out / game).mkdir(parents=True, exist_ok=True)
        (out / game / "history.json").write_text(json.dumps(history, indent=1) + "\n")
        for kind, part, whole in (("functions", t["matched_functions"], t["total_functions"]),
                                  ("code", t["matched_code"], t["total_code"]),
                                  ("readable", t["readable_functions"], t["total_functions"])):
            (out / "badges" / f"{game}-{kind}.json").write_text(
                json.dumps(badge(f"{GAMES[game]['short']} {kind}", part, whole, GAMES[game]["badge"])) + "\n")
        (out / game / "index.html").write_text(
            game_page(game, data, history, {"pairs": len(pairs), "both": both}, args.repo, commit, date),
            encoding="utf-8")
        print(f"{game}: {t['matched_functions']} / {t['total_functions']} functions registered, "
              f"{t['readable_functions']} readable, {t['drafts']} drafts, {len(history)} history entries")
    (out / "index.html").write_text(index_page(games, args.repo, commit, date), encoding="utf-8")
    print(f"wrote {out}")


if __name__ == "__main__":
    main()
