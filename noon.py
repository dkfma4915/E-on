'''회문 판단 문제
회문은 앞으로 읽으나 뒤로 읽으나 차이가 없는 단어들을 뜻한다. 예를 들어서 level, bob과 같은 단어들은 회문에 속한다.
이에 우리는 인자로 전달되는 영단어가 회문인지 아닌지를 판단해서 그 결과를 출력하는 기능의 함수를 정의하고 이에 적절한 main함수를 정의해 보고자 한다.
단 구현의 편의를 위해서 대소문자까지 일치해야 회문으로 인정하기로 하겠다.'''

def main():
    word = input('문자열을 입력하세요 : ')
    judgement = False
    length = len(word)
    count = int(length/2+1)
    for i in range(count):
        if(word[i]!=word[length-(i+1)]):
            break
        if(i==(count-1)):
            judgement = True

    if(judgement==True):
        print('회문입니다.')
    else:
        print('회문이 아닙니다.')

if __name__ == '__main__':
    main()