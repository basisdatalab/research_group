/**
  * Created by Budi Pradnyana on 3/31/2017.
  */
object Equilibrium extends App{
  def getEquilibriumIndex(A: Array[Int]): Int = {
    val bigA: Array[BigInt] = A.map(BigInt(_))
    val sumAll: Array[BigInt] = bigA.scanLeft(BigInt(0))(_+_).tail
    def leftSum(i: Int): BigInt = if (i == 0) 0 else sumAll(i - 1)
    def rightSum(i: Int): BigInt = sumAll.last - sumAll(i)
    def isSumEqual(i: Int): Boolean = leftSum(i) == rightSum(i)
    (0 until sumAll.length).find(isSumEqual).getOrElse(-1)
  }

  println(getEquilibriumIndex(Array(-7, 1, 5, 2, -4, 3, 0)))
}
