public class Mage extends Character {
    public Mage(String name) {
        super(name);
    }

    @Override
    public void attack() {
        System.out.println(getName() + ": 마법으로 공격합니다.");
    }
}
