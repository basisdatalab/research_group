object Equilibrium extends App{
  def getEquilibriumIndex(A: Array[Int]): Int = {
    val sumAll: Array[Int] = A.scanLeft(0)(_+_).tail
    def leftSum(i: Int): Int = if (i == 0) 0 else sumAll(i - 1)
    def rightSum(i: Int): Int = sumAll.last - sumAll(i)
    def isSumEqual(i: Int): Boolean = leftSum(i) == rightSum(i)
    (0 until sumAll.length).find(isSumEqual).getOrElse(-1)
  }
  println(getEquilibriumIndex(Array(-7, 1, 5, 2, -4, 3, 0)))
}