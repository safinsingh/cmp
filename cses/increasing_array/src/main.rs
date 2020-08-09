use std::io;
fn main() {
    let mut len = String::new();
    io::stdin().read_line(&mut len).unwrap();
    let len: usize = len.trim().parse().unwrap();
    let mut vals = String::new();
    io::stdin().read_line(&mut vals).unwrap();
    let mut vals_vec: Vec<usize> = Vec::new();
    for s in vals.trim().split(" ") {
        let s_int: usize = s.trim().parse().unwrap();
        vals_vec.push(s_int);
    }
    let mut count = 0;
    for i in 1..len {
        if vals_vec[i - 1] > vals_vec[i] {
            count += vals_vec[i - 1] - vals_vec[i];
            vals_vec[i] += vals_vec[i - 1] - vals_vec[i];
        }
    }
    print!("{}", count)
}
