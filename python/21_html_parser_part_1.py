from html.parser import HTMLParser


class MyHTMLParser(HTMLParser):
    def handle_starttag(self, tag, attrs):
        print(f'Start : {tag}')
        [print(f'-> {name} > {value}') for name, value in attrs]

    def handle_endtag(self, tag):
        print(f'End   : {tag}')

    def handle_startendtag(self, tag, attrs):
        print(f'Empty : {tag}')
        [print(f'-> {name} > {value}') for name, value in attrs]


html = []
# for i in range(int(input())):
#     html.append(input())
html.append('<html><head><title>HTML Parser - I</title></head>')
html.append(
    "<body data-modal-target class='1'><h1>HackerRank</h1><br /></body></html>"
)
parser = MyHTMLParser()
parser.feed('\n'.join(html))
