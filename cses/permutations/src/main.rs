use std::io;

fn main() {
    let mut num = String::new();
    io::stdin().read_line(&mut num).unwrap();
    let num: usize = num.trim().parse().unwrap();

    if num != 2 && num != 3 {
        let half: i32 = format!("{:.0}", num / 2).parse().unwrap();
        for i in 0..half {
            print!("{} ", 2 * (i + 1))
        }
        if num % 2 == 0 {
            for i in 0..half {
                print!("{} ", 2 * i + 1)
            }
        } else {
            for i in 0..half + 1 {
                print!("{} ", 2 * i + 1)
            }
        }
    } else {
        println!("NO SOLUTION")
    }
}
