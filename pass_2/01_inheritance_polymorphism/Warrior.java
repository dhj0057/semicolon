public class Warrior extends Character {
    public Warrior(String name) {
        super(name);
    }

    @Override
    public void attack() {
        System.out.println(getName() + ": 검으로 공격합니다.");
    }
}
