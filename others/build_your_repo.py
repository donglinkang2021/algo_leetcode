import os

with open('index_en.txt', 'r', encoding='utf-8') as f:
    index_en = f.read()

with open('index_cn.txt', 'r', encoding='utf-8') as f:
    index_cn = f.read()

for line_en, line_cn in zip(index_en.split('\n'), index_cn.split('\n')):
    index_en, chapter_en = line_en.split('. ')
    index_en = index_en.zfill(2)
    dir_name = f"{index_en}-{chapter_en.replace(' ', '_')}"
    file_name = f'{dir_name}/README.md'
    index_cn, chapter_cn = line_cn.split('. ')
    print(f"# {index_en} {chapter_cn}({chapter_en})", file=open(file_name, "w", encoding="utf-8"))