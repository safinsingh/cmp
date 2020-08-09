use std::io;
fn main() {
    let mut num = String::new();
    io::stdin().read_line(&mut num).unwrap();
    let num: i32 = num.trim().parse().unwrap();
    let mut count = 0;
    let mut i = 5;
    while num / i >= 1 {
        count += num / i;
        i *= 5;
    }
    println!("{}", count);
}
