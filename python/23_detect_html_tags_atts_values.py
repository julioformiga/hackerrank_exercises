from html.parser import HTMLParser


class MyHTMLParser(HTMLParser):
    def handle_starttag(self, tag, attrs):
        print(f'{tag}')
        [print(f'-> {name} > {value}') for name, value in attrs]


html = []
# for i in range(int(input())):
#     html.append(input())
html.append('<head>')
html.append('<title>HTML</title>')
html.append('</head>')
html.append('<object type="application/x-flash" ')
html.append('  data="your-file.swf" ')
html.append('  width="0" height="0">')
html.append('  <!-- <param name="movie" value="your-file.swf" /> -->')
html.append('  <param name="quality" value="high"/>')
html.append('</object>')

parser = MyHTMLParser()
parser.feed('\n'.join(html))
