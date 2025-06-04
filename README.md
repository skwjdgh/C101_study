
<h1 align="center">
  
  <a href="https://github.com/skwjdgh">
    <img align="center" src="https://img.shields.io/badge/goto-Main-green.svg" />
  </a>

  <a href="https://github.com/skwjdgh/Back">
    <img align="center" src="https://img.shields.io/badge/goto-Back-green.svg" />
  </a>
  
</h1>


<p align="center">
  <img align="center" src = "https://capsule-render.vercel.app/api?type=blur&height=200&color=gradient&text=C101&descAlign=59&section=header">

## 🗂 문서 개요

이 저장소는 C 언어 학습을 위한 실습 코드와 프로젝트를 날짜별로 정리한 기록입니다. 기초 문법부터 프로젝트 구현까지의 과정을 포함하고 있습니다.

---

### ✅ 주요 학습 내용

- scanf & printf
- 연산자
- 조건문 & 반복문 & while 흐름제어
- 배열과 포인터
- 함수
- 입출력
- 고급-포인터
- 구조체-공용체-열거형
- 고급-프로그래밍
  
---

## 🛠️ 개발 환경

- **OS**: Windows 11  
- **Tool**: Visual Studio 2022

### 🧩 설치 및 환경 설정

#### Visual Studio 2022 설치 및 C 프로그램 실습 절차 - 이 설치 방법은 교안의 내용을 기준으로 작성했습니다.

##### 1. 설치 파일 다운로드
- Visual Studio 공식 사이트(https://visualstudio.microsoft.com/ko/vs/)에 접속
- Visual Studio Community 2022 버전의 설치 파일을 다운로드

##### 2. 설치 프로그램 실행
- 다운로드한 설치 파일(예: vs_community.exe)을 실행
- 라이선스 약관에 동의하고 계속을 클릭

##### 3. 설치 옵션 선택
- 설치 준비가 완료되면 워크로드 선택 화면이 나타남
- ‘C++를 사용한 데스크톱 개발’ 항목을 반드시 체크
- 필요하면 추가 워크로드도 선택
- 설치 버튼 클릭 (설치에는 10GB 이상 필요)

##### 4. 설치 진행 및 완료
- 설치가 진행되며, 컴퓨터 성능에 따라 수 분~수십 분 소요
- 설치가 끝나면 ‘설치 후 시작’이 체크되어 있으면 Visual Studio가 자동 실행됨
- 설치 후 재부팅 메시지가 나오면 컴퓨터를 재시작

##### 5. Visual Studio 2022 첫 실행 및 로그인
- Windows 시작 메뉴에서 Visual Studio 2022 실행
- 로그인 화면이 나오면 나중에 로그인을 선택하거나 Microsoft 계정으로 로그인
- 친숙한 환경(테마 등) 선택 후 진행

##### 6. 새 프로젝트 생성
- Visual Studio 시작 화면에서 [새 프로젝트 만들기] 클릭
- 모든 언어에서 C++ 선택 → Windows 데스크톱 마법사 선택 → 다음
- 프로젝트 이름(예: First)과 저장 위치(예: C:\CookC) 지정
- ‘솔루션 및 프로젝트를 같은 디렉터리에 배치’ 체크 → 만들기
- 애플리케이션 종류는 ‘콘솔 애플리케이션(.exe)’
- 추가 옵션에서 ‘빈 프로젝트’에 체크 → 확인

##### 7. 소스 파일 추가 및 작성
- 솔루션 탐색기에서 소스 파일 폴더 우클릭 → [추가] > [새 항목]
- ‘C++ 파일(.cpp)’을 선택하고 파일명을 ‘First.c’로 입력 → 추가
- 아래와 같이 C 소스코드 입력

```
# include <stdio.h>
void main()
{
    int result;
    result = 100 - 50;
    printf(" %d ", result );
}
```
- 파일 저장

##### 8. 빌드(컴파일 및 링크)
- 메뉴 [빌드] → [솔루션 빌드] 선택 (단축키: Ctrl+Shift+B)
- 오류가 없으면 ‘빌드: 성공 1, 실패 0’ 메시지 확인

##### 9. 실행
- [디버그] → [디버그하지 않고 시작] 선택 (단축키: Ctrl+F5)
- 명령 프롬프트 창이 열리며 실행 결과(예: 50) 확인

##### 10. 프로젝트 닫기 및 재실행
- 작업이 끝나면 [파일] → [솔루션 닫기] 또는 [끝내기]로 종료
- 기존 프로젝트를 열려면 [프로젝트 또는 솔루션 열기]에서 .sln 파일 선택

이 과정대로 따라하면 Visual Studio 2022에서 C 프로그램을 설치, 작성, 빌드, 실행까지 할 수 있습니다.

---

## 📦 문서 구조

```
REPO/
├── README.md      
├── C 언어 이론                 
└── 일자별 학습 내역/                             

```
####  🗃️ 하위 브런치로 이동

<h1 align="center">
  
  <a href="https://github.com/skwjdgh/C101_study/tree/%EC%8B%A4%EC%8A%B5">
    <img align="center" src="https://img.shields.io/badge/goto-Record-yellow.svg" />
  </a>

</h1>
---
###  👨‍💻상단으로 돌아가기
<h1 align="center">
        <a href="https://github.com/skwjdgh/C101_study">
    <img align="center" src="https://img.shields.io/badge/backto-Top-green.svg" />
  </a>
</h1>

