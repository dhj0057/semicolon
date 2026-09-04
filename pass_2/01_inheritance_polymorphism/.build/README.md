# Java 상속, 오버라이딩, 다형성 복습

게임 캐릭터 전투 프로그램으로 상속과 다형성을 복습하는 예제입니다.

## 파일 구성

- `Character.java`: 부모 클래스
- `Warrior.java`: 전사 자식 클래스
- `Mage.java`: 마법사 자식 클래스
- `Archer.java`: 궁수 자식 클래스
- `Main.java`: 캐릭터를 배열에 담고 공격시키는 실행 클래스

## VS Code에서 실행하기

1. VS Code에서 `01_inheritance_polymorphism` 폴더만 엽니다.
2. `Main.java`를 연 뒤 `F5`를 누릅니다.
3. 실행 구성을 묻는 경우 `캐릭터 전투 프로그램 실행`을 선택합니다.

이 폴더에는 현재 컴퓨터에 설치된 JDK 21을 사용하는 VS Code 실행 설정이 포함되어 있습니다.

`run.bat`을 실행해도 컴파일과 실행을 한 번에 진행할 수 있습니다.

터미널에서 직접 실행하려면 다음 명령어를 사용합니다.

```text
& "C:\Users\AISW-510-125\.jdks\ms-21.0.10\bin\javac.exe" -encoding UTF-8 *.java
& "C:\Users\AISW-510-125\.jdks\ms-21.0.10\bin\java.exe" Main
```

## 학습 포인트

- `extends`로 부모 클래스의 필드와 메서드를 물려받습니다.
- `super(name)`으로 부모 생성자를 호출합니다.
- `@Override`로 자식 클래스에 맞게 `attack()`을 다시 작성합니다.
- `Character` 타입 배열에 여러 자식 객체를 함께 담을 수 있습니다.
- 같은 `attack()` 호출도 실제 객체가 무엇인지에 따라 다르게 실행됩니다.

## 예상 실행 결과

```text
===== 캐릭터 전투 프로그램 =====
전사: 검으로 공격합니다.
마법사: 마법으로 공격합니다.
궁수: 활로 공격합니다.
```
