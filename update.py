import os
import json
from urllib.parse import quote

with open('data_list.json', 'r', encoding='utf-8') as f:
    data_list = json.load(f)

for data in data_list:
    with open(data["dir"] + "/README.md", 'r', encoding='utf-8') as f:
        content = f.read()
    todo_count = content.count('- [ ]')
    done_count = content.count('- [x]')
    total_count = todo_count + done_count
    progress = int(done_count / total_count * 100)
    data['progress'] = progress

def get_progress_color(progress):
    if progress < 34:
        return 'red'
    elif progress < 67:
        return 'yellow'
    else:
        return 'green'

progress_format = 'https://img.shields.io/static/v1?label={}&message={}%&color={}'
index_content = ''
for i, data in enumerate(data_list):
    label = f'{i+1:02d} {data["emoji"]} {data["cn"]} ({data["en"]})'
    link_md = '- [{}]({})\n'
    color = get_progress_color(data['progress'])  # 根据 progress 动态设置颜色
    progress_url = progress_format.format(quote(label), data['progress'], color)
    progress_md = f'![{data["progress"]}%]({progress_url})'
    index_content += link_md.format(progress_md, f'./{data["dir"]}/README.md')

readme_content = """# README

{}

## Reference

- [刷题清单](./refer.md)
- [\[力扣刷题攻略\] Re: 从零开始的力扣刷题生活](https://leetcode.cn/circle/discuss/E3yavq/) 
- [如何更加优雅地使用 LeetCode 刷题](https://leetcode.cn/circle/discuss/jPBij8/)
- [Hello 算法 (hello-algo.com)](https://www.hello-algo.com/)

"""

with open("README.md", "w") as f:
    f.write(readme_content.format(index_content))
print("README.md Updated✨✨✨")