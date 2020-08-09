use std::io;
fn main() {
    let mut n = String::new();
    io::stdin().read_line(&mut n).unwrap();
    let n: u32 = n.trim().parse().unwrap();
    let mut i: u64 = 1;
    for _ in 0..n {
        i *= 2;
        if i > 1000000007 {
            i %= 1000000007;
        }
    }
    println!("{}", i);
}
