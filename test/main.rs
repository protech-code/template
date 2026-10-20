fn main() {
    let name = "Minh Duc";
    let project = "Automation Bot";

    println!("Hello, {}! Welcome to {}.", name, project);

    let scores = vec![95, 88, 92];
    let mut total = 0;

    for s in &scores {
        total += s;
    }

    let avg = total / scores.len() as i32;
    println!("Average score: {}", avg);
}
