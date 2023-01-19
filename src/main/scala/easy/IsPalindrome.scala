package Leetcode2023
import scala.io.Source

object IsPalindrome {
  def isPalindrome(number: Int): Boolean =
    if (number < 0)
      false
    else
      number.toString == number.toString.reverse

  // def main(args: Array[String]): Unit =
  //   val number = 121
  //   println(s"IsPalindrome: ${isPalindrome(number)}")
}