
import scala.io.Source

object RomanToInterger {
  val values =
    Map(
      'I' -> 1,
      'V' -> 5,
      'X' -> 10,
      'L' -> 50,
      'C' -> 100,
      'D' -> 500,
      'M' -> 1000
    )

  def romanToInt(roman: String): Int =
    val result = roman.foldLeft(List.empty[Int], 0) {
      case ((sum, idx), character) =>
        var number = values(character)

        if ((idx + 1 < roman.size) && values(roman(idx + 1)) > number)
          number = 0 - number

        (sum ++ List(number), idx + 1)
    }
    result._1.sum

  // def main(args: Array[String]): Unit =
  //   println(s"RomanToInterger: ${romanToInt("LVIII")}")
}