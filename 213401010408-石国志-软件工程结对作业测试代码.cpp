import static org.junit.Assert.*;
import org.junit.Test;

public class ArithmeticTest {

    @Test
    public void testFirstGradeArithmetic() {
        FirstGradeArithmetic firstGradeArithmetic = new FirstGradeArithmetic();
        assertNotNull(firstGradeArithmetic);
    }

    @Test
    public void testSecondGradeArithmetic() {
        SecondGradeArithmetic secondGradeArithmetic = new SecondGradeArithmetic();
        assertNotNull(secondGradeArithmetic);
    }

    @Test
    public void testThirdGradeArithmetic() {
        ThirdGradeArithmetic thirdGradeArithmetic = new ThirdGradeArithmetic();
        assertNotNull(thirdGradeArithmetic);
    }

    @Test
    public void testFourthToSixthGradeArithmetic() {
        FourthToSixthGradeArithmetic fourthToSixthGradeArithmetic = new FourthToSixthGradeArithmetic();
        assertNotNull(fourthToSixthGradeArithmetic);
    }

    // Add more test cases as needed to test the functionality of the Arithmetic classes
}