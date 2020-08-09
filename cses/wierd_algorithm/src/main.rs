use std::io;

fn main() {
    let mut val = String::new();
    io::stdin().read_line(&mut val).unwrap();
    let mut val: i128 = val.trim().parse().unwrap();
    while val != 1 {
        print!("{} ", val);
        if val % 2 == 1 {
            val = val * 3 + 1;
        } else {
            val = val / 2;
        }
    }
    print!("1");
}
