public class Main {
    public static void main(String[] args) {
        Character[] party = {
            new Warrior("전사"),
            new Mage("마법사"),
            new Archer("궁수")
        };

        System.out.println("===== 캐릭터 전투 프로그램 =====");

        for (Character c : party) {
            c.attack();
        }
    }
}
