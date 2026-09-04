public class Archer extends Character {
    public Archer(String name) {
        super(name);
    }

    @Override
    public void attack() {
        System.out.println(getName() + ": 활로 공격합니다.");
    }
}
