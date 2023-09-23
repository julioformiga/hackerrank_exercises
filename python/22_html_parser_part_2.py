from html.parser import HTMLParser


class MyHTMLParser(HTMLParser):
    def handle_comment(self, data):
        sm = 'Multi' if '\n' in data else 'Single'
        print(f'>>> {sm}-line Comment\n{data}')

    def handle_data(self, data):
        if data != '\n':
            print(f'>>> Data\n{data}')


html = []
# for i in range(int(input())):
#     html.append(input())
html.append('<!--[if IE 9]>IE9-specific content')
html.append('<![endif]-->')
html.append('<div> Welcome to HackerRank</div>')
html.append('<!--[if IE 9]>IE9-specific content<![endif]-->')

parser = MyHTMLParser()
parser.feed('\n'.join(html))
