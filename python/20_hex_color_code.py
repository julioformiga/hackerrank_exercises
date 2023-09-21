import re

css = []
# for i in range(int(input())):
#     css.append(input())
css.append('#BED9028')
css.append('{ ')
css.append('    color: #FfFdF8; background-color:#aef;')
css.append('    font-size: 123px;')
css.append('    background: -webkit-linear-gradient(top, #f9f9f9, #fff);')
css.append('} ')
css.append('#Caba')
css.append('{ ')
css.append('    // color: #AAAAAA;')
css.append('    /* color: #BBB; */')
css.append('    /* color: #CCC;')
css.append('    color: #DDD; */')
css.append('    background-color: #ABCD;')
css.append('    border: 2px dashed #fff;')
css.append('} ')


regex_pattern = r'(#[A-Fa-f0-9]{3}|#[A-Fa-f0-9]{6})[;|,|)]'
regex_comment = r'(//)|(/\*)|(\*/)'

for line in css:
    if re.findall(regex_comment, line):
        continue
    res = re.findall(regex_pattern, line)
    if res:
        [print(_) for _ in res]
