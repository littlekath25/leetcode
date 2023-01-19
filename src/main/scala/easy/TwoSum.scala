package Leetcode2023
import scala.io.Source

object TwoSum {
  def twoSum(nums: Array[Int], target: Int): Array[Int] =
    val remainderList = nums.map(num => target - num).zipWithIndex
    val listWithIndex = nums.zipWithIndex
    remainderList.filter { first => 
      listWithIndex.exists { second => 
        second._1 == first._1 && second._2 != first._2}
      }.map(_._2)

  // def main(args: Array[String]): Unit =
  //   val nums = Array(3, 2, 4)
  //   val target = 6

  //   val result = twoSum(nums, target).toList
  //   println(s"TwoSum: ${result}")
}