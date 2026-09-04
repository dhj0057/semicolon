# Java ArrayList와 예외 처리 복습

학생 명단 관리 프로그램으로 `ArrayList`와 `try-catch`를 복습하는 예제입니다.

## 파일 구성

- `Student.java`: 학생 이름을 저장하는 클래스
- `StudentManager.java`: 학생 추가, 목록, 조회, 삭제 기능
- `Main.java`: 메뉴 출력과 사용자 입력 처리

## VS Code에서 실행하기

1. VS Code에서 `02_arraylist_exception` 폴더만 엽니다.
2. `Main.java`를 연 뒤 `F5`를 누릅니다.
3. 실행 구성을 묻는 경우 `학생 명단 관리 프로그램 실행`을 선택합니다.

이 폴더에는 현재 컴퓨터에 설치된 JDK 21을 사용하는 VS Code 실행 설정이 포함되어 있습니다.

`run.bat`을 실행해도 컴파일과 실행을 한 번에 진행할 수 있습니다.

터미널에서 직접 실행하려면 다음 명령어를 사용합니다.

```text
& "C:\Users\AISW-510-125\.jdks\ms-21.0.10\bin\javac.exe" -encoding UTF-8 *.java
& "C:\Users\AISW-510-125\.jdks\ms-21.0.10\bin\java.exe" Main
```

## 학습 포인트

- `ArrayList`는 학생 수가 바뀌어도 크기를 직접 정할 필요가 없습니다.
- `add()`, `get()`, `remove()`, `size()`로 명단을 관리합니다.
- 향상된 `for`문으로 전체 학생을 순서대로 출력합니다.
- 잘못된 학생 번호는 `IndexOutOfBoundsException`으로 처리합니다.
- 숫자가 아닌 입력은 `NumberFormatException`으로 처리합니다.
- 예외가 생겨도 안내 메시지를 출력하고 메뉴를 계속 실행합니다.

## 메뉴

```text
===== 학생 명단 관리 프로그램 =====
1. 학생 추가
2. 학생 목록
3. 학생 조회
4. 학생 삭제
5. 종료
선택:
```
