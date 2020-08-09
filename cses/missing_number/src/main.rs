use std::io;

fn main() {
    let mut n1 = String::new();
    let mut an: i128 = 0;
    io::stdin().read_line(&mut n1).unwrap();
    let n1: i128 = n1.trim().parse().unwrap();
    let mut nums = String::new();
    io::stdin()
        .read_line(&mut nums)
        .expect("Failed to read line");
    for el in nums.trim().split(' ') {
        let i: i128 = el.trim().parse().unwrap();
        an += i;
    }
    println!("{}", ((n1 * (n1 + 1)) / 2) - an)
}
