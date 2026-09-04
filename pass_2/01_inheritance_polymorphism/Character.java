public class Character {
    private String name;

    public Character(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void attack() {
        System.out.println(name + ": 기본 공격을 합니다.");
    }
}
