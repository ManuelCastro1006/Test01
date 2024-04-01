fun main () {
    for (index in 1..100) {
        val divisiblebyThree = index % 3 == 0
        val divisibleByFive = index % 5 == 0
        if (divisiblebyThree && divisibleByFive) {
            println("FizzBuzz")
        } else if (divisiblebyThree) {
            println("Fizz")
        } else if (divisibleByFive) {
            println("Buzz")
        } else {
            println (index)
        }
    }
}