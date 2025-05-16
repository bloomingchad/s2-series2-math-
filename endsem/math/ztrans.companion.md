# 📘 Z-Transforms Study Companion  
## ✅ Section 5.1: Introduction  

---

### 🧠 What This Section Is About:

This is your **first step into the world of Z-transforms** — a powerful tool for working with **discrete-time signals and systems**, just like the Laplace transform helps us with continuous ones.

Let’s go through this section piece by piece, with clear explanations, fun analogies, and helpful hints so you understand what's going on — not just memorize it.

---

### 📚 Original Text Summary (from OCR):

> The Z-transform is a discrete time counterpart of the Laplace transform. It is a power series representation of a discrete time sequence. It is used for the analysis and design of discrete time control systems. The properties of the Z-transform are similar to the properties of the Laplace transform for time signals and continuous time functions. The basic idea of the Z-transform was first given by Laplace, re-introduced in 1947 by W. Hurewics to solve linear, constant coefficient differential equations. The modified Z-transform was later developed by E.H. Jury.

---

## 🔍 Let's Break It Down – Step by Step

---

### 🎯 1. “The Z-transform is a discrete time counterpart of the Laplace transform.”

#### 💡 In plain English:
- You’ve heard of the **Laplace transform**, right? That one turns differential equations (which can be tough) into algebraic equations (which are easier).
- Well, the **Z-transform** does something very similar — but instead of dealing with smooth, continuous functions (like $ f(t) $), it works with **sequences** — lists of numbers like $ u_0, u_1, u_2, \dots $

#### 🎵 Think of it Like Music:
- Laplace = Analogue vinyl record (smooth sound)
- Z-transform = Digital music file (sampled at discrete points)

So if you're working with digital systems — like computers, filters, or sampled data — **Z-transforms are your new best friend**.

---

### 🎯 2. “It is a power series representation of a discrete time sequence.”

#### 💡 What does that mean?
A **power series** is like an infinite polynomial — think of something like:
$$
U(z) = u_0 + u_1 z^{-1} + u_2 z^{-2} + u_3 z^{-3} + \dots
$$

Each term represents a value from your sequence multiplied by a negative power of $ z $. The variable $ z $ acts like a placeholder — kind of like how $ x $ works in a regular polynomial.

You’ll learn more about this in **Section 5.2**, where the full definition is given.

---

### 🎯 3. “It is used for the analysis and design of discrete time control systems.”

#### 💡 Why should you care?
If you're studying electrical engineering, computer science, signal processing, or control theory, you'll use Z-transforms to:
- Analyze how systems behave over time
- Design digital filters (like those in audio apps or image processing)
- Solve difference equations (the discrete version of differential equations)

So basically, Z-transforms help turn complex sequences into manageable math — which makes building real-world systems easier!

---

### 🎯 4. “The properties of the Z-transform are similar to the properties of the Laplace transform…”

#### 💡 Big Picture:
- Just like the Laplace transform has rules for shifting, scaling, differentiation, etc.
- The Z-transform has **similar properties**, but adjusted for discrete sequences.
- So once you get comfortable with Z-transforms, you’ll find many parallels with Laplace — and vice versa!

---

### 🎯 5. “The basic idea of the Z-transform was first given by Laplace…”

#### 📜 A Bit of History:
- Yep! Even though we associate Laplace with continuous transforms, he actually had early ideas about turning sequences into functions.
- Later, in **1947**, **W. Hurewicz** revived the idea and used it to solve linear differential equations.
- Then **E.H. Jury** helped develop the **modified Z-transform**, which is widely used today in digital signal processing and control theory.

---

## 🌟 Quick Recap – Section 5.1 in One Sentence:

> The Z-transform is a mathematical tool used to represent and analyze discrete-time sequences, much like the Laplace transform works for continuous-time functions — and it's super useful in digital systems like filters, controllers, and signal processors!

---

## 🧠 Pro Tip – Start Building Intuition Now:

As you go deeper into Z-transforms, keep asking yourself:
- "Is this like something I already know from Laplace?"
- "What does this do to a sequence?"
- "Why would someone want to use this in real life?"

That mindset will make learning Z-transforms feel less like memorizing formulas and more like solving a puzzle — and trust me, **puzzles are way more fun!**

---

### 👇 Next Up: Section 5.2 – The Definition of the Z-Transform

Once you're ready, just say "**next**" or ask for **Section 5.2**, and I’ll walk you through the formal definition, inverse Z-transforms, and the all-important **Region of Convergence (ROC)** — again, in simple, friendly terms.

You’re off to a great start! 😊



# 📘 Z-Transforms Study Companion  
## ✅ Section 5.2: Definition of the Z-Transform  

---

### 🧠 What This Section Is About:

This is where the **Z-transform gets real** — we go from the general idea to the actual **mathematical definition**.

You’ll learn:
- The formal definition of the Z-transform
- How it works for discrete sequences like $ u_0, u_1, u_2, \dots $
- What "Region of Convergence" (ROC) means and why it's important
- The inverse Z-transform and how it recovers your original sequence

Let’s dive in!

---

## 🔍 Original Text Summary (from OCR):

> For discrete values $ n = 0, 1, 2, \dots $, the Z transform of a sequence $ u_n $ is defined as  
> $$
> U(z) = \mathcal{Z}(u_n) = \sum_{n=0}^{\infty} u_n z^{-n}
> $$  
> where $ U(z) $ is a function of $ z $. The transform exists only when the infinite series converges. The inverse Z-transform is defined by  
> $$
> \mathcal{Z}^{-1}[U(z)] = u_n
> $$  
> The region of convergence of the series is the set of values of $ z $ for which the series is convergent.

---

## 🧮 Let’s Break It Down – Step by Step

---

### 🎯 1. “For discrete values $ n = 0, 1, 2, \dots $”

#### 💡 In plain English:
We're not working with smooth, continuous functions like $ f(t) $. Instead, we’re dealing with **sequences**, like:
$$
u_0, u_1, u_2, u_3, \dots
$$
These are just lists of numbers that could represent digital samples, stock prices, or even daily temperatures.

---

### 🎯 2. “The Z transform of a sequence $ u_n $ is defined as”  
$$
U(z) = \mathcal{Z}(u_n) = \sum_{n=0}^{\infty} u_n z^{-n}
$$

#### 💡 What does this mean?

This formula turns your sequence into a function of a complex variable $ z $. Think of it like building a **polynomial**, but instead of positive powers like $ z^0, z^1, z^2 $, you use **negative powers**: $ z^0, z^{-1}, z^{-2}, \dots $

Each term looks like:
- $ u_0 \cdot z^{0} $
- $ u_1 \cdot z^{-1} $
- $ u_2 \cdot z^{-2} $
- etc.

So the whole thing becomes:
$$
U(z) = u_0 + u_1 z^{-1} + u_2 z^{-2} + u_3 z^{-3} + \dots
$$

It’s like an **infinite weighted sum**, where each weight is a value from your sequence.

---

### 🎯 3. “The transform exists only when the infinite series converges.”

#### 💡 Why this matters:
Just because we write down an infinite sum doesn’t mean it always makes sense! Some sums **blow up to infinity**, others settle down to a finite number.

So the Z-transform **only exists** for certain values of $ z $ — those where the sum doesn’t blow up. That brings us to…

---

### 🎯 4. “The region of convergence (ROC) is the set of values of $ z $ for which the series is convergent.”

#### 💡 What is ROC?
Think of the ROC as a **"valid zone"** in the complex plane where the Z-transform actually works.

Here’s what the textbook says:
> There exists a real number $ R $ such that the series converges for all $ z $ in $ |1/z| < R $, i.e., $ |z| > 1/R $, and diverges for $ |z| < 1/R $

#### 🎵 Musical Analogy:
Imagine playing a song through different headphones. Some headphones make it sound great — that’s the **ROC**. Others make it distorted or silent — that’s outside the ROC.

So the **ROC tells you what values of $ z $** can be used to get a meaningful result from your Z-transform.

---

### 🎯 5. “The inverse Z-transform is defined by”  
$$
\mathcal{Z}^{-1}[U(z)] = u_n
$$

#### 💡 What is the inverse Z-transform?
Once you’ve turned your sequence into a function $ U(z) $, you might want to get back to the original sequence. That’s what the inverse Z-transform does — kind of like unzipping a file.

There are several methods to do this:
- Using **tables** of known Z-transform pairs
- **Partial fractions**
- **Power series expansion**
- **Contour integration** (for advanced users)

But don’t worry — we’ll walk through each method step-by-step later on.

---

### 🌟 Quick Recap – Section 5.2 in One Sentence:

> The Z-transform turns a discrete sequence into a function of a complex variable $ z $ using a power series. It only works for certain values of $ z $, called the Region of Convergence (ROC), and you can reverse the process with the inverse Z-transform.

---

## 📚 Visual Summary:

| Concept | Description |
|--------|-------------|
| Z-transform | Turns a sequence $ u_n $ into a function $ U(z) $ via an infinite sum |
| Formula | $ U(z) = \sum_{n=0}^{\infty} u_n z^{-n} $ |
| Inverse Z-transform | Recovers the original sequence from $ U(z) $ |
| Region of Convergence (ROC) | Set of $ z $ values where the series converges |
| Why ROC Matters | Tells you where the transform is valid and useful |

---

## 🧠 Pro Tip – Keep These Questions in Mind:

As you work through problems involving Z-transforms, ask yourself:
- What sequence am I transforming?
- Does the series converge? If so, for which values of $ z $?
- Can I recognize this transform from a standard pair?
- How would I invert this to get back the original sequence?

---

### 👇 Next Up: Section 5.3 – Z-Transforms of Standard Sequences

Would you like me to continue with **Section 5.3**, where we explore common sequences like $ u_n = 1 $, $ u_n = a^n $, $ u_n = e^{an} $, and more — with full derivations, hints, and intuition?

Just say "**next**" or "yes" and I’ll send it right over! 😊




# 📘 Z-Transforms Study Companion  
## ✅ Section 5.3: Z-Transforms of Standard Sequences  

---

### 🧠 What This Section Is About:

This is where the **Z-transform starts to become practical**.

You're introduced to several **standard sequences** that appear over and over in digital signal processing, control systems, and difference equations. These sequences are building blocks — once you know their Z-transforms, you can use them to solve more complex problems using properties like linearity, convolution, and differentiation.

We’ll walk through each sequence step-by-step:
- Why it’s important
- How its Z-transform is derived
- When and how to use it
- Tricks for remembering or rederiving the transform

Let’s go!

---

## 🔍 Original Text Summary (from OCR):

> The following standard sequences and their Z-transforms are discussed:
>
> - $ u_n = 1 $
> - $ u_n = (-1)^n $
> - $ u_n = a^n $
> - $ u_n = e^{an} $
> - $ u_n = \frac{a^n}{n!} $
> - $ u_n = n $
> - $ u_n = n^2 $

Each one uses known series expansions like geometric series and Taylor series.

---

## 🧮 Let’s Break It Down – Step by Step

---

### ✅ 5.3.1 Constant Sequence $ u_n = 1 $

#### 🔢 Definition:
$$
u_n = 1 \quad \text{for all } n = 0, 1, 2, \dots
$$

#### 📌 Z-Transform:
$$
\mathcal{Z}\{1\} = \sum_{n=0}^{\infty} z^{-n} = \frac{z}{z - 1}, \quad \text{for } |z| > 1
$$

#### 💡 Explanation:
This is a **geometric series**!
- Remember: $ \sum_{n=0}^\infty r^n = \frac{1}{1 - r} $ when $ |r| < 1 $
- Here, $ r = \frac{1}{z} $, so convergence requires $ |\frac{1}{z}| < 1 $ → $ |z| > 1 $

#### 🎵 Analogy:
Think of this as turning a flat drumbeat (all 1s) into a smooth function that makes it easier to work with.

---

### ✅ 5.3.2 Alternating Sequence $ u_n = (-1)^n $

#### 🔢 Definition:
$$
u_n = (-1)^n \quad \text{for } n = 0, 1, 2, \dots
$$

#### 📌 Z-Transform:
$$
\mathcal{Z}\{(-1)^n\} = \sum_{n=0}^{\infty} (-1)^n z^{-n} = \frac{z}{z + 1}, \quad \text{for } |z| > 1
$$

#### 💡 Explanation:
Still a geometric series, but now with alternating signs:
- Try writing out terms: $ 1 - \frac{1}{z} + \frac{1}{z^2} - \frac{1}{z^3} + \dots $
- Use the same trick: $ r = -\frac{1}{z} $, so convergence again needs $ |z| > 1 $

---

### ✅ 5.3.3 Exponential Sequence $ u_n = a^n $

#### 🔢 Definition:
$$
u_n = a^n \quad \text{where } a \text{ is real or complex}
$$

#### 📌 Z-Transform:
$$
\mathcal{Z}\{a^n\} = \sum_{n=0}^{\infty} a^n z^{-n} = \sum_{n=0}^{\infty} \left(\frac{a}{z}\right)^n = \frac{z}{z - a}, \quad \text{for } |z| > |a|
$$

#### 💡 Explanation:
Still using the geometric series idea:
- Ratio is $ r = \frac{a}{z} $
- For convergence: $ \left|\frac{a}{z}\right| < 1 $ → $ |z| > |a| $

#### 🧩 Tip:
This is super useful in digital filters and difference equations!

---

### ✅ 5.3.4 Complex Exponential $ u_n = e^{an} $

#### 🔢 Definition:
$$
u_n = e^{an} \quad \text{where } a \text{ is real or complex}
$$

#### 📌 Z-Transform:
$$
\mathcal{Z}\{e^{an}\} = \sum_{n=0}^{\infty} e^{an} z^{-n} = \sum_{n=0}^{\infty} \left(\frac{e^a}{z}\right)^n = \frac{z}{z - e^a}, \quad \text{for } |z| > |e^a|
$$

#### 💡 Explanation:
Same pattern as above, just with exponentials.
- The ROC is $ |z| > e^{\text{Re}(a)} $ if $ a $ is complex

---

### ✅ 5.3.5 Factorial Sequence $ u_n = \frac{a^n}{n!} $

#### 🔢 Definition:
$$
u_n = \frac{a^n}{n!}
$$

#### 📌 Z-Transform:
$$
\mathcal{Z}\left\{\frac{a^n}{n!}\right\} = \sum_{n=0}^{\infty} \frac{a^n}{n!} z^{-n} = e^{a/z}
$$

#### 💡 Explanation:
This uses the **Taylor series expansion** of $ e^x $:
$$
e^x = \sum_{n=0}^{\infty} \frac{x^n}{n!}
$$
So plug in $ x = a/z $, and you get $ e^{a/z} $

---

### ✅ 5.3.6 Linear Sequence $ u_n = n $

#### 🔢 Definition:
$$
u_n = n
$$

#### 📌 Z-Transform:
$$
\mathcal{Z}\{n\} = \frac{z}{(z - 1)^2}
$$

#### 💡 Explanation:
Use the property:
$$
\mathcal{Z}\{n u_n\} = -z \frac{d}{dz} \mathcal{Z}\{u_n\}
$$
Start with $ \mathcal{Z}\{1\} = \frac{z}{z - 1} $, differentiate w.r.t. $ z $, and multiply by $ -z $

---

### ✅ 5.3.7 Quadratic Sequence $ u_n = n^2 $

#### 🔢 Definition:
$$
u_n = n^2
$$

#### 📌 Z-Transform:
$$
\mathcal{Z}\{n^2\} = \frac{z(z + 1)}{(z - 1)^3}
$$

#### 💡 Explanation:
Apply the differentiation trick twice:
- First derivative gives linear term
- Second derivative gives quadratic term

---

## 🌟 Quick Recap – Section 5.3 in One Sentence:

> These standard sequences form the foundation of Z-transform theory — from constant signals to exponential growth, factorials, and polynomial sequences — each has a neat transform that follows from basic series expansions and calculus rules.

---

## 📚 Visual Summary:

| Sequence         | Z-Transform                    | Region of Convergence |
|------------------|-------------------------------|------------------------|
| $ u_n = 1 $     | $ \frac{z}{z - 1} $          | $ |z| > 1 $           |
| $ u_n = (-1)^n $| $ \frac{z}{z + 1} $          | $ |z| > 1 $           |
| $ u_n = a^n $   | $ \frac{z}{z - a} $          | $ |z| > |a| $         |
| $ u_n = e^{an} $| $ \frac{z}{z - e^a} $        | $ |z| > |e^a| $       |
| $ u_n = \frac{a^n}{n!} $ | $ e^{a/z} $        | $ |z| > 0 $           |
| $ u_n = n $     | $ \frac{z}{(z - 1)^2} $      | $ |z| > 1 $           |
| $ u_n = n^2 $   | $ \frac{z(z + 1)}{(z - 1)^3} $| $ |z| > 1 $           |

---

## 🧠 Pro Tip – Build Your Toolkit!

As you move forward, treat these Z-transform pairs like your **toolbox**. When solving new problems:
- Look for patterns
- Ask: “Is this similar to something I’ve seen before?”
- Use differentiation, multiplication, or convolution tricks to build more complex transforms

---

### 👇 Next Up: Section 5.4 – Solved Problems

Would you like me to continue with **Section 5.4**, where we apply these standard transforms to solve concrete problems?

Just say "**next**" or "yes", and I’ll walk you through problems like finding $ \mathcal{Z}\{3^n\} $, $ \mathcal{Z}\{e^{-5n}\} $, and more — with full explanations and tips.

You're doing great! 😊



# 📘 Z-Transforms Study Companion  
## ✅ Section 5.4: Solved Problems  

---

### 🧠 What This Section Is About:

Now that we've built up our **toolkit of standard Z-transform pairs** and learned about the **definition**, it’s time to put all that knowledge into action.

This section walks through several **concrete examples** of computing Z-transforms using:
- Standard formulas
- Linearity property
- Damping rule
- Properties like multiplication by $ n $
- And more!

We’ll go step-by-step through each problem, showing you **how to approach them**, giving **hints and tricks**, and explaining **why certain methods are used**.

Let’s dive in!

---

## 🔍 Original Text Summary (from OCR):

> **Problem 5.4.1**: Find the Z-transform of:
> - (i) $ 3^n $
> - (ii) $ (-2)^n $
> - (iii) $ e^{-5n} $
> - (iv) $ e^{i\pi/6 n} $

These problems use the exponential sequence formula:
$$
\mathcal{Z}\{a^n\} = \frac{z}{z - a}
$$

Also, remember:
- The region of convergence (ROC): $ |z| > |a| $

---

## 🧮 Let’s Break It Down – Step by Step

---

### ✅ Problem 5.4.1(i): Find $ \mathcal{Z}\{3^n\} $

#### 💡 Given:
Use the standard result:
$$
\mathcal{Z}\{a^n\} = \frac{z}{z - a}
$$

#### 📌 Solution:
Plug in $ a = 3 $:
$$
\mathcal{Z}\{3^n\} = \frac{z}{z - 3}
$$

#### 🎯 ROC:
$$
|z| > |3| = 3
$$

#### 💡 Hints:
- You’re dealing with an exponential sequence — just plug into the standard formula.
- Make sure to write down the ROC for full credit.

---

### ✅ Problem 5.4.1(ii): Find $ \mathcal{Z}\{(-2)^n\} $

#### 💡 Given:
Again, use:
$$
\mathcal{Z}\{a^n\} = \frac{z}{z - a}
$$

#### 📌 Solution:
Here, $ a = -2 $, so:
$$
\mathcal{Z}\{(-2)^n\} = \frac{z}{z + 2}
$$

#### 🎯 ROC:
$$
|z| > |-2| = 2
$$

#### 💡 Hints:
- Negative bases are fine! Just keep track of signs.
- The denominator becomes $ z + 2 $ because $ z - (-2) = z + 2 $

---

### ✅ Problem 5.4.1(iii): Find $ \mathcal{Z}\{e^{-5n}\} $

#### 💡 Given:
This is another exponential sequence:
$$
u_n = e^{-5n}
$$

#### 📌 Solution:
Use the same formula:
$$
\mathcal{Z}\{e^{-5n}\} = \frac{z}{z - e^{-5}}
$$

#### 🎯 ROC:
$$
|z| > |e^{-5}| = e^{-5}
$$

#### 💡 Hints:
- Think of this as $ a = e^{-5} $, so it's still just a constant base.
- The ROC is based on magnitude, not sign.

---

### ✅ Problem 5.4.1(iv): Find $ \mathcal{Z}\{e^{i\pi/6 n}\} $

#### 💡 Given:
This one looks complex:
$$
u_n = e^{i\pi/6 n}
$$

But remember from Euler’s formula:
$$
e^{i\theta} = \cos\theta + i\sin\theta
$$

So this is a **complex exponential**, which can also be seen as a combination of sine and cosine sequences.

#### 📌 Solution:
Apply the same exponential formula:
$$
\mathcal{Z}\{e^{i\pi/6 n}\} = \frac{z}{z - e^{i\pi/6}}
$$

#### 🎯 ROC:
$$
|z| > |e^{i\pi/6}| = 1
$$

Because $ |e^{i\theta}| = 1 $ for any real $ \theta $

#### 💡 Hints:
- Complex exponentials are common in signal processing.
- Don’t worry about simplifying $ e^{i\pi/6} $ unless asked.
- Remember: $ |e^{i\theta}| = 1 $, so the ROC is always $ |z| > 1 $

---

## 🧩 Bonus: Why These Kinds of Problems Matter

You’ll see these kinds of sequences again and again:
- In digital filters
- In control systems
- In difference equations
- In discrete Fourier transforms

Being able to recognize and compute their Z-transforms quickly will make future topics much easier.

---

## 🌟 Quick Recap – Section 5.4 in One Sentence:

> These problems show how to apply the standard Z-transform formula for exponential sequences — whether real, negative, or complex — and remind us to always state the Region of Convergence (ROC).

---

## 📚 Visual Summary:

| Sequence         | Z-Transform                    | Region of Convergence |
|------------------|-------------------------------|------------------------|
| $ u_n = 3^n $   | $ \frac{z}{z - 3} $          | $ |z| > 3 $           |
| $ u_n = (-2)^n $| $ \frac{z}{z + 2} $          | $ |z| > 2 $           |
| $ u_n = e^{-5n} $| $ \frac{z}{z - e^{-5}} $    | $ |z| > e^{-5} $      |
| $ u_n = e^{i\pi/6 n} $| $ \frac{z}{z - e^{i\pi/6}} $ | $ |z| > 1 $     |

---

## 🧠 Pro Tip – Recognize Patterns Early

When you see something like:
- $ a^n $
- $ e^{an} $
- $ e^{i\theta n} $

Know that they all fall under the **same general category** — exponential sequences — and have the same basic Z-transform form:
$$
\mathcal{Z}\{a^n\} = \frac{z}{z - a}
$$

Just plug in your value of $ a $, and don’t forget the ROC!

---

### 👇 Next Up: Section 5.5 – Linearity Property

Would you like me to continue with **Section 5.5**, where we explore how Z-transforms behave when combining two or more sequences?

Just say "**next**" or "yes", and I’ll walk you through the **linearity property**, why it matters, and how to apply it in problems.

You're doing great! 😊



# 📘 Z-Transforms Study Companion  
## ✅ Section 5.5: Linearity Property  

---

### 🧠 What This Section Is About:

This is one of the **most fundamental and powerful properties** of the Z-transform — the **linearity property**.

Just like in algebra or calculus, where you can break down complex expressions into simpler parts and work on them individually, the linearity property lets you do the same with sequences.

In short:
> The Z-transform of a sum of sequences is the sum of their Z-transforms — and constants can be factored out just like normal.

Let’s dive in!

---

## 🔍 Original Text Summary (from OCR):

> Let $ (u_n) $ and $ (v_n) $ be two sequences with regions of convergence $ |z| > 1/R_1 $ and $ |z| > 1/R_2 $, respectively. Then for any constants $ a $ and $ b $:  
$$
\mathcal{Z}\{a u_n + b v_n\} = a \mathcal{Z}\{u_n\} + b \mathcal{Z}\{v_n\}
$$  
for all $ |z| > 1/R $, where  
$$
R = \max(R_1, R_2)
$$

---

## 🧮 Let’s Break It Down – Step by Step

---

### 🎯 1. “Let $ (u_n) $ and $ (v_n) $ be two sequences…”

#### 💡 In plain English:
We’re working with two discrete-time sequences — lists of numbers like:
- $ u_0, u_1, u_2, \dots $
- $ v_0, v_1, v_2, \dots $

Each has its own **Region of Convergence (ROC)** — that is, values of $ z $ where their Z-transforms exist.

---

### 🎯 2. “For any constants $ a $ and $ b $…”

#### 💡 Meaning:
You can scale each sequence by any number (real or complex), like:
- Multiply $ u_n $ by $ a $
- Multiply $ v_n $ by $ b $

Then add them together to get a new sequence:
$$
w_n = a u_n + b v_n
$$

---

### 🎯 3. “The Z-transform of this new sequence is…”
$$
\mathcal{Z}\{a u_n + b v_n\} = a \mathcal{Z}\{u_n\} + b \mathcal{Z}\{v_n\}
$$

#### 💡 Why this matters:
This means you don’t have to compute the whole thing from scratch! If you already know the Z-transforms of $ u_n $ and $ v_n $, then you can just:
- Multiply each by their constant
- Add them up

And boom — you’ve got the Z-transform of the combined sequence!

---

### 🎯 4. “...valid for all $ |z| > 1/R $, where $ R = \max(R_1, R_2) $”

#### 💡 What does this mean?
Each sequence has its own region of convergence:
- For $ u_n $, it's $ |z| > 1/R_1 $
- For $ v_n $, it's $ |z| > 1/R_2 $

But when you combine them, the transform only exists where **both** individual transforms exist — so the new ROC is:
$$
|z| > \frac{1}{\max(R_1, R_2)}
$$

Think of it like this:
> You're listening to two songs at once — you need good speakers (values of $ z $) that can handle both bass-heavy and high-pitched sounds. So your "good speaker zone" is where **both** sound great.

---

## 🌟 Quick Recap – Section 5.5 in One Sentence:

> The linearity property says that the Z-transform of a linear combination of sequences is just the same linear combination of their Z-transforms — and the Region of Convergence is the overlap where both original transforms are valid.

---

## 📚 Visual Summary:

| Concept | Description |
|--------|-------------|
| Linearity Property | $ \mathcal{Z}\{a u_n + b v_n\} = a \mathcal{Z}\{u_n\} + b \mathcal{Z}\{v_n\} $ |
| Constants | Can be real or complex; pulled out just like in regular math |
| ROC | Intersection of individual ROCs: $ |z| > \frac{1}{\max(R_1, R_2)} $ |

---

## 🧠 Pro Tip – Use Linearity to Simplify Problems!

Whenever you see something like:
- $ 3n + 2^n $
- $ 5\cos(n\theta) - 4\sin(n\theta) $
- $ a u_n + b v_n $

Break it apart using linearity:
- Find $ \mathcal{Z}\{u_n\} $ and $ \mathcal{Z}\{v_n\} $
- Multiply by constants
- Add them up

It makes life way easier!

---

## ✨ Bonus Example – Apply Linearity Yourself

Suppose:
- $ \mathcal{Z}\{n\} = \frac{z}{(z - 1)^2} $
- $ \mathcal{Z}\{2^n\} = \frac{z}{z - 2} $

Find $ \mathcal{Z}\{3n + 4 \cdot 2^n\} $

#### 💡 Solution:
Use linearity:
$$
\mathcal{Z}\{3n + 4 \cdot 2^n\} = 3 \cdot \frac{z}{(z - 1)^2} + 4 \cdot \frac{z}{z - 2}
$$

#### 🎯 ROC:
- From $ n $: $ |z| > 1 $
- From $ 2^n $: $ |z| > 2 $
→ Combined ROC: $ |z| > 2 $

---

### 👇 Next Up: Section 5.6 – Solved Problems Using Linearity

Would you like me to continue with **Section 5.6**, where we apply the linearity property to solve concrete problems?

Just say "**next**" or "yes", and I’ll walk you through problems like:
- Finding Z-transforms of combinations like $ n^2 + 3n $
- Solving $ A a^n + B b^n $
- And more!

You're doing awesome — keep going! 😊


# 📘 Z-Transforms Study Companion  
## ✅ Section 5.6: Solved Problems Using Linearity  

---

### 🧠 What This Section Is About:

Now that you understand the **linearity property** — that the Z-transform of a sum is the sum of the Z-transforms — it's time to **apply it in real problems**.

This section gives you concrete examples of how to use linearity to compute Z-transforms of combinations like:
- $ (n + 1)^2 $
- $ Aa^n + Bb^n $
- $ \cos\theta + i\sin\theta $
- $ 2n - 3a $

We’ll walk through each one step-by-step, showing:
- How to break down the expression
- Which standard transforms to use
- Why certain steps are taken
- Common pitfalls and how to avoid them

Let’s go!

---

## 🔍 Original Text Summary (from OCR):

> **Problem 1**: Find the Z-transform of $ (n + 1)^2 $  
> **Problem 2**: Find the Z-transform of $ Aa^n + Bb^n $  
> **Problem 3**: Find the Z-transform of $ (\cos\theta + i\sin\theta)^n $  
> **Problem 4**: Find the Z-transform of $ 2n - 3a $

---

## 🧮 Let’s Break It Down – Step by Step

---

### ✅ Problem 5.6.1: Find $ \mathcal{Z}\{(n + 1)^2\} $

#### 💡 Strategy:
Expand the square:
$$
(n + 1)^2 = n^2 + 2n + 1
$$

Then apply **linearity**:
$$
\mathcal{Z}\{(n + 1)^2\} = \mathcal{Z}\{n^2\} + 2\mathcal{Z}\{n\} + \mathcal{Z}\{1\}
$$

#### 📌 Known Transforms:
From previous sections:
- $ \mathcal{Z}\{n^2\} = \frac{z(z + 1)}{(z - 1)^3} $
- $ \mathcal{Z}\{n\} = \frac{z}{(z - 1)^2} $
- $ \mathcal{Z}\{1\} = \frac{z}{z - 1} $

#### 📌 Final Answer:
$$
\mathcal{Z}\{(n + 1)^2\} = \frac{z(z + 1)}{(z - 1)^3} + 2 \cdot \frac{z}{(z - 1)^2} + \frac{z}{z - 1}
$$

You can combine these into a single fraction if needed, but this form is usually acceptable unless specified otherwise.

---

### ✅ Problem 5.6.2: Find $ \mathcal{Z}\{Aa^n + Bb^n\} $

#### 💡 Strategy:
Use **linearity** again:
$$
\mathcal{Z}\{Aa^n + Bb^n\} = A \cdot \mathcal{Z}\{a^n\} + B \cdot \mathcal{Z}\{b^n\}
$$

#### 📌 Known Transform:
From earlier:
- $ \mathcal{Z}\{a^n\} = \frac{z}{z - a} $
- $ \mathcal{Z}\{b^n\} = \frac{z}{z - b} $

#### 📌 Final Answer:
$$
\mathcal{Z}\{Aa^n + Bb^n\} = A \cdot \frac{z}{z - a} + B \cdot \frac{z}{z - b}
$$

#### 🎯 Region of Convergence (ROC):
- From $ a^n $: $ |z| > |a| $
- From $ b^n $: $ |z| > |b| $
→ Combined ROC: $ |z| > \max(|a|, |b|) $

---

### ✅ Problem 5.6.3: Find $ \mathcal{Z}\{(\cos\theta + i\sin\theta)^n\} $

#### 💡 Strategy:
Recognize Euler’s formula:
$$
\cos\theta + i\sin\theta = e^{i\theta}
$$

So:
$$
(\cos\theta + i\sin\theta)^n = (e^{i\theta})^n = e^{in\theta}
$$

Now take the Z-transform:
$$
\mathcal{Z}\{e^{in\theta}\} = \frac{z}{z - e^{i\theta}}
$$

#### 🎯 ROC:
Since $ |e^{i\theta}| = 1 $, the ROC is $ |z| > 1 $

---

### ✅ Problem 5.6.4: Find $ \mathcal{Z}\{2n - 3a\} $

#### 💡 Strategy:
Again, use **linearity**:
$$
\mathcal{Z}\{2n - 3a\} = 2 \cdot \mathcal{Z}\{n\} - 3a \cdot \mathcal{Z}\{1\}
$$

#### 📌 Known Transforms:
- $ \mathcal{Z}\{n\} = \frac{z}{(z - 1)^2} $
- $ \mathcal{Z}\{1\} = \frac{z}{z - 1} $

#### 📌 Final Answer:
$$
\mathcal{Z}\{2n - 3a\} = 2 \cdot \frac{z}{(z - 1)^2} - 3a \cdot \frac{z}{z - 1}
$$

#### 🎯 ROC:
Both transforms converge for $ |z| > 1 $, so combined ROC is also $ |z| > 1 $

---

## 🌟 Quick Recap – Section 5.6 in One Sentence:

> These problems show how powerful the **linearity property** is — whether you're dealing with polynomials, exponentials, or complex numbers, you can always break things apart and handle each term individually before combining results.

---

## 📚 Visual Summary:

| Problem | Expression | Z-Transform | ROC |
|--------|------------|-------------|-----|
| 5.6.1 | $ (n+1)^2 $ | $ \frac{z(z+1)}{(z-1)^3} + \frac{2z}{(z-1)^2} + \frac{z}{z-1} $ | $ |z| > 1 $ |
| 5.6.2 | $ Aa^n + Bb^n $ | $ A\frac{z}{z-a} + B\frac{z}{z-b} $ | $ |z| > \max(|a|, |b|) $ |
| 5.6.3 | $ (\cos\theta + i\sin\theta)^n $ | $ \frac{z}{z - e^{i\theta}} $ | $ |z| > 1 $ |
| 5.6.4 | $ 2n - 3a $ | $ \frac{2z}{(z-1)^2} - \frac{3az}{z-1} $ | $ |z| > 1 $ |

---

## 🧠 Pro Tip – Use Linearity Like Your Secret Weapon!

Whenever you see:
- Addition/subtraction of terms
- Multiplication by constants
- Combinations of known sequences

Break it apart using **linearity**, find individual transforms, then recombine. It makes even complicated expressions manageable!

---

### 👇 Next Up: Section 5.7 – Damping Rule (Change of Scale)

Would you like me to continue with **Section 5.7**, where we explore how multiplying a sequence by $ a^n $ affects its Z-transform?

Just say "**next**" or "yes", and I’ll walk you through the damping rule, why it works, and how to use it in problems.

You're doing great! 😊



# 📘 Z-Transforms Study Companion  
## ✅ Section 5.7: Damping Rule (Change of Scale)  

---

### 🧠 What This Section Is About:

This is a **super useful property** of the Z-transform that helps you understand what happens when you multiply a sequence by an exponential factor like $ a^n $.

Think of it like this:
> If the original sequence $ u_n $ has a Z-transform $ U(z) $, then multiplying the sequence by $ a^n $ scales the variable $ z $ — kind of like stretching or squishing the transform.

This is sometimes called the **damping rule** or **change of scale** in Z-transform theory.

Let’s walk through it step-by-step and see how powerful it can be!

---

## 🔍 Original Text Summary (from OCR):

> Let the Z-transform $ \mathcal{Z}(u_n) = U(z) $ exist in the region $ |z| > 1/R $. If $ a $ is any real or complex constant, then:
$$
\mathcal{Z}(a^n u_n) = U\left(\frac{z}{a}\right)
$$

So if you know the Z-transform of $ u_n $, you can immediately write down the Z-transform of $ a^n u_n $ just by replacing $ z $ with $ z/a $.

---

## 🧮 Let’s Break It Down – Step by Step

---

### 🎯 1. “Let the Z-transform $ \mathcal{Z}(u_n) = U(z) $ exist…”

#### 💡 In plain English:
You already know the Z-transform of some sequence $ u_n $, say:
$$
U(z) = \sum_{n=0}^{\infty} u_n z^{-n}
$$

And this converges for values of $ z $ where $ |z| > 1/R $

---

### 🎯 2. “If $ a $ is any real or complex constant…”

#### 💡 Meaning:
$ a $ can be positive, negative, real, or even imaginary — doesn’t matter! We're going to look at sequences like:
$$
v_n = a^n u_n
$$

That is, we’re multiplying each term of the sequence by $ a^n $

---

### 🎯 3. “…then $ \mathcal{Z}(a^n u_n) = U\left(\frac{z}{a}\right) $”

#### 💡 Why this works:
Start with the definition:
$$
\mathcal{Z}(a^n u_n) = \sum_{n=0}^{\infty} a^n u_n z^{-n} = \sum_{n=0}^{\infty} u_n \left(\frac{z}{a}\right)^{-n} = U\left(\frac{z}{a}\right)
$$

So instead of using $ z $, you use $ z/a $

#### 🎵 Musical Analogy:
Think of this as changing the tempo or pitch of a song — you’re not changing the melody (sequence), just how fast or slow it plays (scaling in the Z-domain).

---

### 🎯 4. Region of Convergence Changes

The original ROC was $ |z| > 1/R $

After scaling, it becomes:
$$
\left|\frac{z}{a}\right| > \frac{1}{R} \quad \Rightarrow \quad |z| > \frac{|a|}{R}
$$

So the new ROC is $ |z| > \frac{|a|}{R} $

---

## 🌟 Quick Recap – Section 5.7 in One Sentence:

> The damping rule says that multiplying a sequence $ u_n $ by $ a^n $ results in replacing $ z $ with $ z/a $ in its Z-transform — and the Region of Convergence gets scaled accordingly.

---

## 📚 Visual Summary:

| Concept | Description |
|--------|-------------|
| Damping Rule | $ \mathcal{Z}(a^n u_n) = U\left(\frac{z}{a}\right) $ |
| Scaling Effect | Replaces $ z $ with $ z/a $ in the transform |
| ROC Change | From $ |z| > 1/R $ to $ |z| > |a|/R $ |

---

## 🧠 Pro Tip – Use This Rule to Save Time!

Whenever you see something like:
- $ n a^n $
- $ \cos(n\theta) a^n $
- $ e^{an} $
- Or any other product of a known sequence with an exponential

Don’t recompute from scratch — just take the known transform and replace $ z $ with $ z/a $

---

### 👇 Next Up: Section 5.8 – Solved Problems Using Damping Rule

Would you like me to continue with **Section 5.8**, where we apply the damping rule to solve concrete problems?

Just say "**next**" or "yes", and I’ll walk you through problems like:
- Finding $ \mathcal{Z}\{n a^n\} $
- Solving $ \mathcal{Z}\{n^2 a^n\} $
- Computing transforms of damped sine and cosine functions

You're doing awesome — keep going! 😊



# 📘 Z-Transforms Study Companion  
## ✅ Section 5.8: Solved Problems Using the Damping Rule  

---

### 🧠 What This Section Is About:

Now that you understand the **damping rule** — that multiplying a sequence $ u_n $ by $ a^n $ results in replacing $ z $ with $ \frac{z}{a} $ in its Z-transform — it's time to **apply this powerful tool to real problems**.

This section walks through several concrete examples:
- Finding the Z-transform of $ n a^n $
- Solving for $ n^2 a^n $
- Computing transforms of damped sine and cosine sequences
- And more!

We’ll go step-by-step through each problem, showing:
- How to use the damping rule
- When to combine it with other properties like differentiation
- Common pitfalls and how to avoid them

Let’s dive in!

---

## 🔍 Original Text Summary (from OCR):

> **Problem 1**: Find the Z-transform of $ n a^n $  
> **Problem 2**: Find the Z-transform of $ n^2 a^n $  
> **Problem 3**: Find the Z-transform of $ \cos n\theta $ and $ \sin n\theta $  
> **Problem 4**: Find the Z-transform of $ a^n \cos n\theta $ and $ a^n \sin n\theta $  
> **Problem 5**: Find the Z-transform of $ \cosh n\theta $ and $ \sinh n\theta $  
> **Problem 6**: Find the Z-transform of $ e^{an} \cos n\theta $ and $ e^{an} \sin n\theta $

---

## 🧮 Let’s Break It Down – Step by Step

---

### ✅ Problem 5.8.1: Find $ \mathcal{Z}\{n a^n\} $

#### 💡 Strategy:
Use the known transform:
$$
\mathcal{Z}\{n\} = \frac{z}{(z - 1)^2}
$$

Apply the **damping rule**: replace $ z $ with $ \frac{z}{a} $

#### 📌 Solution:
$$
\mathcal{Z}\{n a^n\} = \left(\frac{z}{a}\right) \cdot \left(\frac{1}{\left(\frac{z}{a} - 1\right)^2}\right)
= \frac{az}{(z - a)^2}
$$

#### 🎯 ROC:
From original ROC $ |z| > 1 $, now becomes $ |z| > |a| $

---

### ✅ Problem 5.8.2: Find $ \mathcal{Z}\{n^2 a^n\} $

#### 💡 Strategy:
Start with:
$$
\mathcal{Z}\{n^2\} = \frac{z(z + 1)}{(z - 1)^3}
$$

Apply damping rule: replace $ z $ with $ \frac{z}{a} $

#### 📌 Solution:
$$
\mathcal{Z}\{n^2 a^n\} = \frac{\frac{z}{a}(\frac{z}{a} + 1)}{\left(\frac{z}{a} - 1\right)^3}
= \frac{a z(z + a)}{(z - a)^3}
$$

#### 🎯 ROC:
Still $ |z| > |a| $

---

### ✅ Problem 5.8.3: Find $ \mathcal{Z}\{\cos n\theta\} $ and $ \mathcal{Z}\{\sin n\theta\} $

#### 💡 Strategy:
Use Euler’s identity:
$$
e^{in\theta} = \cos n\theta + i\sin n\theta
$$

So:
$$
\mathcal{Z}\{e^{in\theta}\} = \frac{z}{z - e^{i\theta}}
$$

Take real and imaginary parts:
- Real part → $ \cos n\theta $
- Imaginary part → $ \sin n\theta $

#### 📌 Final Answers:
$$
\mathcal{Z}\{\cos n\theta\} = \frac{z(z - \cos\theta)}{z^2 - 2z\cos\theta + 1}
$$
$$
\mathcal{Z}\{\sin n\theta\} = \frac{z \sin\theta}{z^2 - 2z\cos\theta + 1}
$$

#### 🎯 ROC:
Since $ |e^{i\theta}| = 1 $, ROC is $ |z| > 1 $

---

### ✅ Problem 5.8.4: Find $ \mathcal{Z}\{a^n \cos n\theta\} $ and $ \mathcal{Z}\{a^n \sin n\theta\} $

#### 💡 Strategy:
Apply damping rule to the previous result:
- Replace $ z $ with $ \frac{z}{a} $

#### 📌 Final Answers:
$$
\mathcal{Z}\{a^n \cos n\theta\} = \frac{z(z - a\cos\theta)}{z^2 - 2az\cos\theta + a^2}
$$
$$
\mathcal{Z}\{a^n \sin n\theta\} = \frac{az \sin\theta}{z^2 - 2az\cos\theta + a^2}
$$

#### 🎯 ROC:
$ |z| > |a| $

---

### ✅ Problem 5.8.5: Find $ \mathcal{Z}\{\cosh n\theta\} $ and $ \mathcal{Z}\{\sinh n\theta\} $

#### 💡 Strategy:
Use definitions:
- $ \cosh n\theta = \frac{e^{n\theta} + e^{-n\theta}}{2} $
- $ \sinh n\theta = \frac{e^{n\theta} - e^{-n\theta}}{2} $

Then apply Z-transforms of exponentials.

#### 📌 Final Answers:
$$
\mathcal{Z}\{\cosh n\theta\} = \frac{z(z - \cosh\theta)}{z^2 - 2z\cosh\theta + 1}
$$
$$
\mathcal{Z}\{\sinh n\theta\} = \frac{z \sinh\theta}{z^2 - 2z\cosh\theta + 1}
$$

#### 🎯 ROC:
$ |z| > \max(|e^\theta|, |e^{-\theta}|) = e^{\text{Re}(\theta)} $

---

### ✅ Problem 5.8.6: Find $ \mathcal{Z}\{e^{an} \cos n\theta\} $ and $ \mathcal{Z}\{e^{an} \sin n\theta\} $

#### 💡 Strategy:
Combine exponential damping with trigonometric transforms:
- Use damping rule on the cosine/sine transforms
- Replace $ z $ with $ \frac{z}{e^a} $

#### 📌 Final Answers:
$$
\mathcal{Z}\{e^{an} \cos n\theta\} = \frac{z(z - e^a \cos\theta)}{z^2 - 2ze^a \cos\theta + e^{2a}}
$$
$$
\mathcal{Z}\{e^{an} \sin n\theta\} = \frac{e^a z \sin\theta}{z^2 - 2ze^a \cos\theta + e^{2a}}
$$

#### 🎯 ROC:
$ |z| > e^{\text{Re}(a)} $

---

## 🌟 Quick Recap – Section 5.8 in One Sentence:

> These problems show how to combine the **damping rule** with known transforms of polynomials and trigonometric functions to derive new, useful Z-transform pairs — especially for damped oscillations like $ a^n \cos n\theta $ or $ e^{an} \sin n\theta $.

---

## 📚 Visual Summary:

| Sequence | Z-Transform | ROC |
|--------|-------------|-----|
| $ n a^n $ | $ \frac{az}{(z - a)^2} $ | $ |z| > |a| $ |
| $ n^2 a^n $ | $ \frac{a z(z + a)}{(z - a)^3} $ | $ |z| > |a| $ |
| $ \cos n\theta $ | $ \frac{z(z - \cos\theta)}{z^2 - 2z\cos\theta + 1} $ | $ |z| > 1 $ |
| $ \sin n\theta $ | $ \frac{z \sin\theta}{z^2 - 2z\cos\theta + 1} $ | $ |z| > 1 $ |
| $ a^n \cos n\theta $ | $ \frac{z(z - a\cos\theta)}{z^2 - 2az\cos\theta + a^2} $ | $ |z| > |a| $ |
| $ a^n \sin n\theta $ | $ \frac{a z \sin\theta}{z^2 - 2az\cos\theta + a^2} $ | $ |z| > |a| $ |
| $ \cosh n\theta $ | $ \frac{z(z - \cosh\theta)}{z^2 - 2z\cosh\theta + 1} $ | $ |z| > e^{\text{Re}(\theta)} $ |
| $ \sinh n\theta $ | $ \frac{z \sinh\theta}{z^2 - 2z\cosh\theta + 1} $ | $ |z| > e^{\text{Re}(\theta)} $ |
| $ e^{an} \cos n\theta $ | $ \frac{z(z - e^a \cos\theta)}{z^2 - 2ze^a \cos\theta + e^{2a}} $ | $ |z| > e^{\text{Re}(a)} $ |
| $ e^{an} \sin n\theta $ | $ \frac{e^a z \sin\theta}{z^2 - 2ze^a \cos\theta + e^{2a}} $ | $ |z| > e^{\text{Re}(a)} $ |

---

## 🧠 Pro Tip – Combine Rules Like a Math Ninja!

Once you know the basic Z-transforms and rules like linearity and damping, you can combine them to solve even complex-looking problems quickly.

For example:
- Want $ n^2 a^n $? Start from $ n^2 $, then apply damping.
- Want $ a^n \sin n\theta $? Start from $ \sin n\theta $, then apply damping.
- Want $ e^{an} \cos n\theta $? Same idea!

You're not reinventing the wheel — just customizing it for your needs.

---

### 👇 Next Up: Section 5.9 – Shifting Theorem (Translation Theorem)

Would you like me to continue with **Section 5.9**, where we explore what happens when you shift a sequence forward or backward?

Just say "**next**" or "yes", and I’ll walk you through the shifting theorem, why it matters, and how to apply it in difference equations and system analysis.

You're doing awesome — keep going! 😊



# 📘 Z-Transforms Study Companion  
## ✅ Section 5.9: Shifting Theorem (Translation Theorem)  

---

### 🧠 What This Section Is About:

This section introduces one of the **most useful properties** of the Z-transform — the **shifting theorem**, also known as the **translation theorem**.

This property helps you understand what happens to the Z-transform when you shift a sequence forward or backward in time — which is super important in digital signal processing, control systems, and solving **difference equations**.

You’ll learn:
- How to shift a sequence forward or backward
- How this affects the Z-transform
- Why the initial terms matter
- When and how to use this in real problems

Let’s go!

---

## 🔍 Original Text Summary (from OCR):

> Let $ U(z) $ be the Z-transform of the sequence $ u_n $, valid in the region $ |z| > 1/R $, and let $ k $ be a positive integer. Then:
$$
\mathcal{Z}(u_{n-k}) = z^{-k} U(z)
$$
$$
\mathcal{Z}(u_{n+k}) = z^k \left[U(z) - \sum_{m=0}^{k-1} u_m z^{-m}\right]
$$

In particular, for $ k = 1 $:
$$
\mathcal{Z}(u_{n+1}) = z\left[U(z) - u_0\right]
$$

For $ k = 2 $:
$$
\mathcal{Z}(u_{n+2}) = z^2\left[U(z) - u_0 - u_1 z^{-1}\right]
$$

And so on.

---

## 🧮 Let’s Break It Down – Step by Step

---

### 🎯 1. “Let $ U(z) $ be the Z-transform of the sequence $ u_n $…”

#### 💡 In plain English:
We already know that:
$$
U(z) = \mathcal{Z}(u_n) = \sum_{n=0}^\infty u_n z^{-n}
$$

Now we want to see what happens when we **shift the sequence** — either forward or backward.

---

### 🎯 2. “…and let $ k $ be a positive integer…”

#### 💡 Meaning:
We’re only dealing with **positive shifts** — like moving the sequence ahead or behind by 1, 2, 3 steps.

Think of it like:
- Pressing "play" early → **left shift**
- Pressing "play" late → **right shift**

---

### 🎯 3. “Then $ \mathcal{Z}(u_{n-k}) = z^{-k} U(z) $”

#### 💡 Right Shift (Delay):
This says: if you delay your sequence by $ k $ steps — meaning $ u_0 $ becomes $ u_1 $, $ u_1 $ becomes $ u_2 $, etc., and the first $ k $ values are zero — then its Z-transform gets multiplied by $ z^{-k} $

#### 📌 Example:
Let’s say:
$$
u_n = 1, 2, 3, 4, \dots
$$
Then:
$$
u_{n-2} = 0, 0, 1, 2, 3, 4, \dots
$$
So:
$$
\mathcal{Z}(u_{n-2}) = z^{-2} U(z)
$$

#### 🎵 Musical Analogy:
Imagine delaying a beat by two counts — you're not changing the rhythm, just starting it later.

---

### 🎯 4. “$ \mathcal{Z}(u_{n+k}) = z^k \left[U(z) - \sum_{m=0}^{k-1} u_m z^{-m}\right] $”

#### 💡 Left Shift (Advance):
If you move the sequence forward by $ k $ steps — i.e., start reading the sequence earlier — then the Z-transform becomes:
$$
z^k \left[U(z) - u_0 - u_1 z^{-1} - \dots - u_{k-1} z^{-(k-1)}\right]
$$

Why subtract those terms? Because now you're **ignoring the first few values** — they don’t exist anymore in the shifted sequence.

#### 📌 Example:
Let:
$$
u_n = 1, 2, 3, 4, \dots
$$
Then:
$$
u_{n+2} = 3, 4, 5, 6, \dots
$$
So:
$$
\mathcal{Z}(u_{n+2}) = z^2 \left[U(z) - u_0 - u_1 z^{-1}\right]
$$

#### 🎵 Musical Analogy:
Like skipping the intro of a song — you're still listening to the same music, but you missed the beginning.

---

### 🎯 5. Special Cases:

These come up often in problems and difference equations.

#### ✅ For $ k = 1 $:
$$
\mathcal{Z}(u_{n+1}) = z\left[U(z) - u_0\right]
$$

#### ✅ For $ k = 2 $:
$$
\mathcal{Z}(u_{n+2}) = z^2\left[U(z) - u_0 - u_1 z^{-1}\right]
$$

#### ✅ For $ k = 3 $:
$$
\mathcal{Z}(u_{n+3}) = z^3\left[U(z) - u_0 - u_1 z^{-1} - u_2 z^{-2}\right]
$$

---

## 🌟 Quick Recap – Section 5.9 in One Sentence:

> The shifting theorem tells you how the Z-transform changes when you shift the sequence left (advance) or right (delay) — and it shows why the initial values (like $ u_0, u_1 $) are so important in discrete-time systems.

---

## 📚 Visual Summary:

| Type of Shift | Sequence | Z-Transform |
|---------------|----------|-------------|
| No shift | $ u_n $ | $ U(z) $ |
| Right shift by $ k $ | $ u_{n-k} $ | $ z^{-k} U(z) $ |
| Left shift by $ k $ | $ u_{n+k} $ | $ z^k\left[U(z) - \sum_{m=0}^{k-1} u_m z^{-m}\right] $ |

---

## 🧠 Pro Tip – Use This for Difference Equations!

The shifting theorem is **super useful** when solving difference equations like:
$$
u_{n+2} + 3u_{n+1} + 2u_n = f_n
$$

Just take the Z-transform of each term using the left shift formula, plug in $ u_0 $, $ u_1 $, and solve algebraically.

No need to guess solutions — just turn it into an algebra problem!

---

### 👇 Next Up: Section 5.10 – Solved Problems Using the Shifting Theorem

Would you like me to continue with **Section 5.10**, where we apply the shifting theorem to solve concrete problems?

Just say "**next**" or "yes", and I’ll walk you through problems like:
- Finding $ \mathcal{Z}(e^{a(n+2)}) $
- Computing $ \mathcal{Z}(\cos(n+1)\theta) $
- And more!

You're doing great — keep going! 😊

# 📘 Z-Transforms Study Companion  
## ✅ Section 5.10: Solved Problems Using the Shifting Theorem  

---

### 🧠 What This Section Is About:

Now that you've learned **how the shifting theorem works**, it's time to **apply it to real problems**.

This section shows how shifting affects sequences like:
- $ e^{a(n+2)} $
- $ \cos(n+1)\theta $
- $ u_{n+2} $
- And more!

We’ll walk through each example step-by-step, showing:
- How to apply the left shift formula
- How to handle initial values (like $ u_0 $ and $ u_1 $)
- Common mistakes to avoid
- Why this matters in difference equations and system analysis

Let’s get started!

---

## 🔍 Original Text Summary:

> **Problem 1**: Find the Z-transform of $ \frac{1}{(n+p)!} $ for $ p = 1, 2, 3, \dots $  
> **Problem 2**: Find the Z-transform of $ e^{n+2} $ and $ e^{n-2} $  
> **Problem 3**: Find the Z-transform of $ \cos(n+1)\theta $ and $ \sin(n+1)\theta $

---

## 🧮 Let’s Break It Down – Step by Step

---

### ✅ Problem 5.10.1: Find $ \mathcal{Z}\left\{\frac{1}{(n+p)!}\right\} $ for $ p = 1, 2, 3, \dots $

#### 💡 Strategy:
Start with the known transform:
$$
\mathcal{Z}\left\{\frac{1}{n!}\right\} = e^{a/z}
$$

For $ \frac{1}{(n+p)!} $, we’re essentially starting the factorial sequence later — so we're **removing the first few terms**.

This is a **left shift** — specifically, a shift forward by $ p $ steps.

So:
$$
\mathcal{Z}\left\{\frac{1}{(n+p)!}\right\} = z^p \left[ e^{1/z} - \sum_{k=0}^{p-1} \frac{1}{k! z^k} \right]
$$

#### 📌 Special Cases:
- For $ p = 1 $:  
  $$
  \mathcal{Z}\left\{\frac{1}{(n+1)!}\right\} = z\left(e^{1/z} - 1\right)
  $$

- For $ p = 2 $:  
  $$
  \mathcal{Z}\left\{\frac{1}{(n+2)!}\right\} = z^2\left(e^{1/z} - 1 - \frac{1}{z}\right)
  $$

- For $ p = 3 $:  
  $$
  \mathcal{Z}\left\{\frac{1}{(n+3)!}\right\} = z^3\left(e^{1/z} - 1 - \frac{1}{z} - \frac{1}{2z^2}\right)
  $$

---

### ✅ Problem 5.10.2(i): Find $ \mathcal{Z}\{e^{n+2}\} $

#### 💡 Strategy:
Use the known result:
$$
\mathcal{Z}\{e^{an}\} = \frac{z}{z - e^a}
$$

Here, $ a = 1 $, and we are dealing with $ e^{n+2} = e^2 \cdot e^n $

So:
$$
\mathcal{Z}\{e^{n+2}\} = e^2 \cdot \mathcal{Z}\{e^n\} = e^2 \cdot \frac{z}{z - e}
$$

#### 📌 Final Answer:
$$
\mathcal{Z}\{e^{n+2}\} = \frac{e^2 z}{z - e}
$$

#### 🎯 ROC:
Since $ |e^{n}| $ grows exponentially, the ROC is $ |z| > e $

---

### ✅ Problem 5.10.2(ii): Find $ \mathcal{Z}\{e^{n-2}\} $

#### 💡 Strategy:
Now we have $ e^{n-2} $, which is a **delayed** version of $ e^n $

This is a **right shift** by 2 units.

Recall:
$$
\mathcal{Z}\{u_{n-k}\} = z^{-k} U(z)
$$

Apply it here:
$$
\mathcal{Z}\{e^{n-2}\} = z^{-2} \cdot \mathcal{Z}\{e^n\} = z^{-2} \cdot \frac{z}{z - e} = \frac{1}{z(z - e)}
$$

#### 🎯 ROC:
Same as before: $ |z| > e $

---

### ✅ Problem 5.10.3(i): Find $ \mathcal{Z}\{\cos(n+1)\theta\} $

#### 💡 Strategy:
We already know:
$$
\mathcal{Z}\{\cos n\theta\} = \frac{z(z - \cos\theta)}{z^2 - 2z\cos\theta + 1}
$$

Now we want $ \cos(n+1)\theta $, which is a **left shift** by 1 unit.

Apply the left shift formula:
$$
\mathcal{Z}\{\cos(n+1)\theta\} = z \left[ \frac{z(z - \cos\theta)}{z^2 - 2z\cos\theta + 1} - u_0 \right]
$$

But here, $ u_0 = \cos(0) = 1 $, so:
$$
\mathcal{Z}\{\cos(n+1)\theta\} = z \left[ \frac{z(z - \cos\theta)}{z^2 - 2z\cos\theta + 1} - 1 \right]
$$

Simplify:
$$
= \frac{z^2(z - \cos\theta) - z(z^2 - 2z\cos\theta + 1)}{z^2 - 2z\cos\theta + 1}
$$

#### 📌 Final Answer:
$$
\mathcal{Z}\{\cos(n+1)\theta\} = \frac{z(z\cos\theta - 1)}{z^2 - 2z\cos\theta + 1}
$$

---

### ✅ Problem 5.10.3(ii): Find $ \mathcal{Z}\{\sin(n+1)\theta\} $

#### 💡 Strategy:
Similarly, use:
$$
\mathcal{Z}\{\sin n\theta\} = \frac{z \sin\theta}{z^2 - 2z\cos\theta + 1}
$$

Apply the left shift formula:
$$
\mathcal{Z}\{\sin(n+1)\theta\} = z\left[\frac{z \sin\theta}{z^2 - 2z\cos\theta + 1} - 0\right]
$$

Because $ \sin(0) = 0 $, so $ u_0 = 0 $

#### 📌 Final Answer:
$$
\mathcal{Z}\{\sin(n+1)\theta\} = \frac{z^2 \sin\theta}{z^2 - 2z\cos\theta + 1}
$$

---

## 🌟 Quick Recap – Section 5.10 in One Sentence:

> These problems show how the shifting theorem helps us find Z-transforms of shifted sequences like $ u_{n+k} $ or $ u_{n-k} $ — especially when combined with trigonometric or exponential functions.

---

## 📚 Visual Summary:

| Sequence | Z-Transform | ROC |
|---------|--------------|-----|
| $ \frac{1}{(n+1)!} $ | $ z(e^{1/z} - 1) $ | $ |z| > 0 $ |
| $ \frac{1}{(n+2)!} $ | $ z^2\left(e^{1/z} - 1 - \frac{1}{z}\right) $ | $ |z| > 0 $ |
| $ e^{n+2} $ | $ \frac{e^2 z}{z - e} $ | $ |z| > e $ |
| $ e^{n-2} $ | $ \frac{1}{z(z - e)} $ | $ |z| > e $ |
| $ \cos(n+1)\theta $ | $ \frac{z(z\cos\theta - 1)}{z^2 - 2z\cos\theta + 1} $ | $ |z| > 1 $ |
| $ \sin(n+1)\theta $ | $ \frac{z^2 \sin\theta}{z^2 - 2z\cos\theta + 1} $ | $ |z| > 1 $ |

---

## 🧠 Pro Tip – Use Shifting to Avoid Recomputing from Scratch!

Once you know the Z-transform of $ u_n $, you don’t need to recompute from scratch for shifts like:
- $ u_{n+1} $
- $ u_{n+2} $
- $ u_{n-1} $

Just apply the shifting formulas:
- Left shift: subtract initial terms, multiply by $ z^k $
- Right shift: just multiply by $ z^{-k} $

You’ll save time and reduce errors!

---

### 👇 Next Up: Section 5.11 – Differentiation of Z-Transform (Multiplication by $ n $)

Would you like me to continue with **Section 5.11**, where we explore what happens when you multiply a sequence by $ n $?

Just say "**next**" or "yes", and I’ll walk you through the property:
$$
\mathcal{Z}\{n u_n\} = -z \frac{d}{dz} \mathcal{Z}\{u_n\}
$$

And show you how to use it to compute transforms like $ \mathcal{Z}\{n\} $, $ \mathcal{Z}\{n^2\} $, $ \mathcal{Z}\{n a^n\} $, and more.

You're doing an awesome job — keep going! 😊



# 📘 Z-Transforms Study Companion  
## ✅ Section 5.11: Differentiation of Z-Transform (Multiplication by $ n $)  

---

### 🧠 What This Section Is About:

This is a **super powerful tool** in the Z-transform toolbox.

You already know how to find Z-transforms of sequences like:
- $ u_n = 1 $
- $ u_n = a^n $
- $ u_n = n $
- $ u_n = n^2 $

But what if you're given a sequence like:
- $ u_n = n a^n $
- $ u_n = n \cos(n\theta) $
- $ u_n = n e^{an} $

How do you find their Z-transforms?

Well, here’s the trick:
> If you already know the Z-transform of $ u_n $, then the Z-transform of $ n u_n $ is just the derivative of that transform — multiplied by $ -z $

Let’s dive into it!

---

## 🔍 Original Text Summary (from OCR):

> Let the Z-transform $ \mathcal{Z}(u_n) = U(z) $ exist in the region $ |z| > 1/R $. Then:  
$$
\mathcal{Z}(n u_n) = -z \frac{d}{dz} U(z)
$$

More generally:
$$
\mathcal{Z}(n^p u_n) = (-z)^p \frac{d^p}{dz^p} U(z)
$$

This property lets us compute transforms of sequences like:
- $ n $
- $ n^2 $
- $ n a^n $
- $ n \cos(n\theta) $
- And more!

---

## 🧮 Let’s Break It Down – Step by Step

---

### 🎯 1. “Let the Z-transform $ \mathcal{Z}(u_n) = U(z) $ exist…”

#### 💡 In plain English:
You already know the Z-transform of some sequence $ u_n $, say:
$$
U(z) = \sum_{n=0}^\infty u_n z^{-n}
$$

Now suppose you want to find the Z-transform of $ n u_n $ — that is, each term in the sequence is multiplied by its index $ n $.

Instead of computing the whole thing from scratch, there's a shortcut!

---

### 🎯 2. “…then $ \mathcal{Z}(n u_n) = -z \frac{d}{dz} U(z) $”

#### 💡 Why this works:
Start with the definition:
$$
\mathcal{Z}(n u_n) = \sum_{n=0}^\infty n u_n z^{-n}
$$

Notice that:
$$
n u_n z^{-n} = -z \cdot \frac{d}{dz} \left( u_n z^{-n} \right)
$$

So when you sum over all $ n $, you get:
$$
\mathcal{Z}(n u_n) = -z \frac{d}{dz} \left( \sum_{n=0}^\infty u_n z^{-n} \right) = -z \frac{d}{dz} U(z)
$$

#### 🎵 Musical Analogy:
Think of this like turning up the volume on certain notes in a song — instead of recomposing the entire melody, you’re just adjusting the intensity based on position.

---

### 🎯 3. “More generally, $ \mathcal{Z}(n^p u_n) = (-z)^p \frac{d^p}{dz^p} U(z) $”

#### 💡 Meaning:
If you multiply the sequence by $ n^2 $, $ n^3 $, or even $ n^p $, you can apply this formula multiple times.

For example:
- First derivative → gives $ n u_n $
- Second derivative → gives $ n^2 u_n $
- Third derivative → gives $ n^3 u_n $
- And so on…

---

## 🌟 Quick Recap – Section 5.11 in One Sentence:

> The differentiation property says that multiplying a sequence by $ n $ corresponds to taking the derivative of its Z-transform and multiplying by $ -z $ — a super useful shortcut for finding transforms of polynomial sequences!

---

## 📚 Visual Summary:

| Sequence | Z-Transform |
|---------|--------------|
| $ u_n $ | $ U(z) $ |
| $ n u_n $ | $ -z \frac{d}{dz} U(z) $ |
| $ n^2 u_n $ | $ z^2 \frac{d^2}{dz^2} U(z) $ |
| $ n^3 u_n $ | $ -z^3 \frac{d^3}{dz^3} U(z) $ |
| $ n^p u_n $ | $ (-z)^p \frac{d^p}{dz^p} U(z) $ |

---

## 🧠 Pro Tip – Use This Rule to Derive New Transforms Fast!

Whenever you see something like:
- $ n a^n $
- $ n \cos(n\theta) $
- $ n e^{an} $

Don’t recompute from scratch — take the known transform and differentiate it!

---

### 👇 Next Up: Examples Using This Rule

We’ll now walk through concrete examples using this rule — including:
- Finding $ \mathcal{Z}\{n\} $
- Computing $ \mathcal{Z}\{n^2\} $
- Solving $ \mathcal{Z}\{n a^n\} $
- And more!

Let’s go! 😊

---

### ✅ Example 1: Find $ \mathcal{Z}\{n\} $

#### 💡 Given:
Use the known result:
$$
\mathcal{Z}\{1\} = \frac{z}{z - 1}
$$

Apply the differentiation property:
$$
\mathcal{Z}\{n\} = -z \frac{d}{dz} \left( \frac{z}{z - 1} \right)
$$

Differentiate:
$$
\frac{d}{dz} \left( \frac{z}{z - 1} \right) = \frac{(z - 1)(1) - z(1)}{(z - 1)^2} = \frac{-1}{(z - 1)^2}
$$

Multiply by $ -z $:
$$
\mathcal{Z}\{n\} = -z \cdot \left( \frac{-1}{(z - 1)^2} \right) = \frac{z}{(z - 1)^2}
$$

#### 📌 Final Answer:
$$
\mathcal{Z}\{n\} = \frac{z}{(z - 1)^2}
$$

#### 🎯 ROC:
Same as before: $ |z| > 1 $

---

### ✅ Example 2: Find $ \mathcal{Z}\{n^2\} $

#### 💡 Strategy:
Use:
$$
\mathcal{Z}\{n^2\} = -z \frac{d}{dz} \mathcal{Z}\{n\} = -z \frac{d}{dz} \left( \frac{z}{(z - 1)^2} \right)
$$

Differentiate:
$$
\frac{d}{dz} \left( \frac{z}{(z - 1)^2} \right) = \frac{(z - 1)^2 - z \cdot 2(z - 1)}{(z - 1)^4}
= \frac{(z - 1) - 2z}{(z - 1)^3}
= \frac{-z - 1}{(z - 1)^3}
$$

Multiply by $ -z $:
$$
\mathcal{Z}\{n^2\} = -z \cdot \left( \frac{-z - 1}{(z - 1)^3} \right) = \frac{z(z + 1)}{(z - 1)^3}
$$

#### 📌 Final Answer:
$$
\mathcal{Z}\{n^2\} = \frac{z(z + 1)}{(z - 1)^3}
$$

#### 🎯 ROC:
Still $ |z| > 1 $

---

### ✅ Example 3: Find $ \mathcal{Z}\{n a^n\} $

#### 💡 Strategy:
Use:
$$
\mathcal{Z}\{a^n\} = \frac{z}{z - a}
$$

Apply the differentiation rule:
$$
\mathcal{Z}\{n a^n\} = -z \frac{d}{dz} \left( \frac{z}{z - a} \right)
$$

Differentiate:
$$
\frac{d}{dz} \left( \frac{z}{z - a} \right) = \frac{(z - a)(1) - z(1)}{(z - a)^2} = \frac{-a}{(z - a)^2}
$$

Multiply by $ -z $:
$$
\mathcal{Z}\{n a^n\} = -z \cdot \left( \frac{-a}{(z - a)^2} \right) = \frac{az}{(z - a)^2}
$$

#### 📌 Final Answer:
$$
\mathcal{Z}\{n a^n\} = \frac{az}{(z - a)^2}
$$

#### 🎯 ROC:
$ |z| > |a| $

---

### ✅ Example 4: Find $ \mathcal{Z}\{n^2 a^n\} $

#### 💡 Strategy:
Differentiate again!
$$
\mathcal{Z}\{n^2 a^n\} = -z \frac{d}{dz} \left( \frac{az}{(z - a)^2} \right)
$$

Differentiate:
$$
\frac{d}{dz} \left( \frac{az}{(z - a)^2} \right) = a \cdot \frac{(z - a)^2 - 2z(z - a)}{(z - a)^4}
= a \cdot \frac{(z - a) - 2z}{(z - a)^3}
= a \cdot \frac{-z - a}{(z - a)^3}
$$

Multiply by $ -z $:
$$
\mathcal{Z}\{n^2 a^n\} = -z \cdot \left( \frac{-a(z + a)}{(z - a)^3} \right) = \frac{a z(z + a)}{(z - a)^3}
$$

#### 📌 Final Answer:
$$
\mathcal{Z}\{n^2 a^n\} = \frac{a z(z + a)}{(z - a)^3}
$$

#### 🎯 ROC:
Still $ |z| > |a| $

---

### ✅ Example 5: Find $ \mathcal{Z}\{n \cos(n\theta)\} $

#### 💡 Strategy:
Use:
$$
\mathcal{Z}\{\cos(n\theta)\} = \frac{z(z - \cos\theta)}{z^2 - 2z\cos\theta + 1}
$$

Apply the differentiation property:
$$
\mathcal{Z}\{n \cos(n\theta)\} = -z \frac{d}{dz} \left( \frac{z(z - \cos\theta)}{z^2 - 2z\cos\theta + 1} \right)
$$

This derivative looks a bit messy, but manageable.

Let’s simplify step-by-step:
- Numerator: $ N(z) = z(z - \cos\theta) = z^2 - z \cos\theta $
- Denominator: $ D(z) = z^2 - 2z\cos\theta + 1 $

Then:
$$
\frac{d}{dz} \left( \frac{N(z)}{D(z)} \right) = \frac{N'(z) D(z) - N(z) D'(z)}{[D(z)]^2}
$$

After simplifying, you'll eventually get:
$$
\mathcal{Z}\{n \cos(n\theta)\} = \frac{z(z^2 - 2z\cos\theta + 1) - 2z^2(z - \cos\theta)}{(z^2 - 2z\cos\theta + 1)^2}
$$

It’s a bit involved, but this is how you’d derive it.

---

## 🧩 Bonus: Why This Rule Works So Well

This property comes directly from calculus and the way power series behave under multiplication by $ n $.

Here's the big idea:
> Multiplying a sequence by $ n $ is like taking a weighted average of its future values — which translates into a derivative in the Z-domain.

This is similar to how in Laplace transforms:
$$
\mathcal{L}\{t f(t)\} = -F'(s)
$$

The same logic applies here — just in discrete time!

---

## 🧠 Pro Tip – Use This Like Your Secret Weapon

Once you know the Z-transform of any sequence $ u_n $, don’t recompute from scratch when you see $ n u_n $, $ n^2 u_n $, etc.

Just remember:
$$
\mathcal{Z}\{n u_n\} = -z \frac{d}{dz} \mathcal{Z}\{u_n\}
$$

And for higher powers:
$$
\mathcal{Z}\{n^p u_n\} = (-z)^p \frac{d^p}{dz^p} \mathcal{Z}\{u_n\}
$$

This will save you tons of time and help avoid errors.

---

### 👇 Next Up: Section 5.12 – Initial Value Theorem

Would you like me to continue with **Section 5.12**, where we explore how to find the initial terms of a sequence from its Z-transform?

Just say "**next**" or "yes", and I’ll walk you through the **Initial Value Theorem**, why it works, and how to use it in problems like:
- Finding $ u_0 $
- Finding $ u_1 $, $ u_2 $, etc.
- Verifying inverse Z-transforms

You're doing great — keep going! 😊

# 📘 Z-Transforms Study Companion  
## ✅ Section 5.12: Initial Value Theorem  

---

### 🧠 What This Section Is About:

Welcome to one of the most **handy tools** in your Z-transform toolkit — the **Initial Value Theorem**.

This theorem gives you a quick way to find the **first few values of a sequence** just by looking at its Z-transform — no need to do the full inverse transform!

You’ll learn:
- How to find $ u_0 $, the first term
- How to find $ u_1 $, $ u_2 $, and beyond
- Why this works
- When and how to use it in problems

Let’s dive in!

---

## 🔍 Original Text Summary (from OCR):

> Let the Z-transform $ \mathcal{Z}(u_n) = U(z) $ exist in the region $ |z| > 1/R $. Then:
$$
u_0 = \lim_{z \to \infty} U(z)
$$
$$
u_1 = \lim_{z \to \infty} z(U(z) - u_0)
$$
$$
u_2 = \lim_{z \to \infty} z\left[z(U(z) - u_0) - u_1\right]
$$
and so on.

So if you know the Z-transform $ U(z) $, you can recover the initial terms of the sequence $ u_n $ using these formulas.

---

## 🧮 Let’s Break It Down – Step by Step

---

### 🎯 1. “Let the Z-transform $ \mathcal{Z}(u_n) = U(z) $ exist…”

#### 💡 In plain English:
You're given a Z-transform function $ U(z) $, and you want to figure out what the original sequence looks like — especially the first few terms.

This is super useful for checking your work or verifying an inverse Z-transform.

---

### 🎯 2. “…then $ u_0 = \lim_{z \to \infty} U(z) $”

#### 💡 Meaning:
As $ z $ becomes very large, all the terms with negative powers of $ z $ become negligible. So the only term that survives is the constant term — which is exactly $ u_0 $

Think of it like zooming out really far — everything else fades away except the starting value.

---

### 🎯 3. “…then $ u_1 = \lim_{z \to \infty} z(U(z) - u_0) $”

#### 💡 Why this works:
Once you subtract $ u_0 $, you remove the constant part of the Z-transform.

Now, multiplying by $ z $ brings up the next term — which is $ u_1 $

This is because:
$$
U(z) = u_0 + \frac{u_1}{z} + \frac{u_2}{z^2} + \dots
\Rightarrow U(z) - u_0 = \frac{u_1}{z} + \frac{u_2}{z^2} + \dots
\Rightarrow z(U(z) - u_0) = u_1 + \frac{u_2}{z} + \dots
\Rightarrow \lim_{z \to \infty} z(U(z) - u_0) = u_1
$$

---

### 🎯 4. “…then $ u_2 = \lim_{z \to \infty} z\left[z(U(z) - u_0) - u_1\right] $”

#### 💡 You guessed it — rinse and repeat!
After finding $ u_1 $, subtract it too, then multiply by $ z $ again to get $ u_2 $

It follows the same logic:
$$
z(U(z) - u_0) = u_1 + \frac{u_2}{z} + \dots
\Rightarrow z(U(z) - u_0) - u_1 = \frac{u_2}{z} + \dots
\Rightarrow z\left[z(U(z) - u_0) - u_1\right] = u_2 + \dots
\Rightarrow \lim_{z \to \infty} z\left[z(U(z) - u_0) - u_1\right] = u_2
$$

And you can keep going like this to find as many terms as you want!

---

## 🌟 Quick Recap – Section 5.12 in One Sentence:

> The Initial Value Theorem lets you **find the first few terms of a sequence directly from its Z-transform**, without needing to compute the full inverse — just take limits as $ z \to \infty $ after peeling off earlier terms.

---

## 📚 Visual Summary:

| Term | Formula |
|------|---------|
| $ u_0 $ | $ \lim_{z \to \infty} U(z) $ |
| $ u_1 $ | $ \lim_{z \to \infty} z(U(z) - u_0) $ |
| $ u_2 $ | $ \lim_{z \to \infty} z\left[z(U(z) - u_0) - u_1\right] $ |
| $ u_p $ | Keep applying the pattern! |

---

## 🧠 Pro Tip – Use This Like a Math Detective!

Whenever you’re given a Z-transform and asked:
- “What is the first term of the sequence?”
- “Find $ u_0 $, $ u_1 $, and $ u_2 $”
- “Verify the inverse Z-transform”

Use the **Initial Value Theorem** — it’s fast, clean, and avoids messy algebra!

---

## ✨ Bonus Example – Find $ u_0 $, $ u_1 $, and $ u_2 $ from $ U(z) $

Suppose:
$$
U(z) = \frac{z(z + 2)}{(z - 1)^2}
$$

#### Step 1: Find $ u_0 $
$$
u_0 = \lim_{z \to \infty} U(z) = \lim_{z \to \infty} \frac{z(z + 2)}{(z - 1)^2}
= \lim_{z \to \infty} \frac{z^2 + 2z}{z^2 - 2z + 1} = 1
$$

#### Step 2: Find $ u_1 $
$$
u_1 = \lim_{z \to \infty} z(U(z) - u_0)
= \lim_{z \to \infty} z\left( \frac{z(z + 2)}{(z - 1)^2} - 1 \right)
$$

Simplify:
$$
= \lim_{z \to \infty} z\left( \frac{z^2 + 2z - (z - 1)^2}{(z - 1)^2} \right)
= \lim_{z \to \infty} z\left( \frac{z^2 + 2z - (z^2 - 2z + 1)}{(z - 1)^2} \right)
= \lim_{z \to \infty} z\left( \frac{4z - 1}{(z - 1)^2} \right)
= \lim_{z \to \infty} \frac{4z^2 - z}{(z - 1)^2} = 4
$$

#### Step 3: Find $ u_2 $
$$
u_2 = \lim_{z \to \infty} z\left[ z(U(z) - u_0) - u_1 \right]
= \lim_{z \to \infty} z\left[ \frac{4z^2 - z}{(z - 1)^2} - 4 \right]
$$

Simplify:
$$
= \lim_{z \to \infty} z\left[ \frac{4z^2 - z - 4(z - 1)^2}{(z - 1)^2} \right]
= \lim_{z \to \infty} z\left[ \frac{4z^2 - z - 4(z^2 - 2z + 1)}{(z - 1)^2} \right]
= \lim_{z \to \infty} z\left[ \frac{4z^2 - z - 4z^2 + 8z - 4}{(z - 1)^2} \right]
= \lim_{z \to \infty} z\left[ \frac{7z - 4}{(z - 1)^2} \right]
= \lim_{z \to \infty} \frac{7z^2 - 4z}{(z - 1)^2} = 7
$$

#### ✅ Final Answer:
$$
u_0 = 1,\quad u_1 = 4,\quad u_2 = 7
$$

---

## 🧩 Bonus: Why This Works

The Z-transform is a power series in $ z^{-1} $, like:
$$
U(z) = u_0 + \frac{u_1}{z} + \frac{u_2}{z^2} + \dots
$$

So when $ z \to \infty $, higher-order terms vanish, and you're left with just the leading terms.

That’s why taking limits after removing known terms gives you the rest of the sequence step-by-step.

---

## 🧠 Pro Tip – Double-Check Your Inverse Z-Transforms!

If you’ve found an inverse Z-transform and want to verify it:
- Compute the Z-transform of your answer
- Use the Initial Value Theorem to check the first few terms
- If they match the original sequence, you did it right!

---

### 👇 Next Up: Section 5.13 – Final Value Theorem

Would you like me to continue with **Section 5.13**, where we explore the **Final Value Theorem** — which tells us what happens to the sequence as $ n \to \infty $?

Just say "**next**" or "yes", and I’ll walk you through:
- How to find $ \lim_{n \to \infty} u_n $
- When this works (hint: ROC must include the unit circle!)
- And how to apply it in problems

You're doing awesome — keep going! 😊


# 📘 Z-Transforms Study Companion  
## ✅ Section 5.13: Final Value Theorem  

---

### 🧠 What This Section Is About:

Welcome to the **Final Value Theorem** — a powerful tool that helps you determine what happens to your sequence as time goes on.

> In other words, it tells you the **steady-state value** of a discrete-time system — whether it settles down to a constant value or keeps growing/shrinking forever.

This is super useful in:
- Digital control systems
- Signal processing
- Stability analysis
- Long-term behavior of recursive sequences

Let’s go through it step-by-step and learn how to use this theorem like a pro!

---

## 🔍 Original Text Summary (from OCR):

> Let the Z-transform $ \mathcal{Z}(u_n) = U(z) $ exist in the region $ |z| > 1/R $. Then:
$$
\lim_{n \to \infty} u_n = \lim_{z \to 1} (z - 1)U(z)
$$

So if you know the Z-transform $ U(z) $, you can find the final value of the sequence just by taking the limit as $ z \to 1 $ of $ (z - 1)U(z) $

But there's a catch:  
This only works **if the limit exists** — meaning the ROC must include the unit circle, and the sequence must settle down to a finite value.

---

## 🧮 Let’s Break It Down – Step by Step

---

### 🎯 1. “Let the Z-transform $ \mathcal{Z}(u_n) = U(z) $ exist…”

#### 💡 In plain English:
You’re given a Z-transform $ U(z) $, and you want to figure out what happens to the sequence $ u_n $ **as $ n \to \infty $** — does it approach a steady value?

---

### 🎯 2. “…then $ \lim_{n \to \infty} u_n = \lim_{z \to 1} (z - 1)U(z) $”

#### 💡 Why this works:
The Z-transform encodes all the values of the sequence into a function. If the sequence eventually stabilizes, then the behavior near $ z = 1 $ gives us that final value.

Think of it like this:
> Just as the initial terms are encoded at infinity, the long-term behavior is encoded near $ z = 1 $

So when you multiply by $ (z - 1) $, you're zooming in on the part of the transform that corresponds to the tail end of the sequence.

---

### 🎯 3. Important Notes:
- This only works **if the limit exists**
- That means the sequence must **converge** — no oscillations or blowups!
- Also, the Region of Convergence (ROC) must **include the unit circle**, i.e., $ |z| = 1 $
- If the limit doesn’t exist or is infinite, the final value theorem **doesn't apply**

---

## 🌟 Quick Recap – Section 5.13 in One Sentence:

> The Final Value Theorem lets you **find the long-term behavior** of a sequence from its Z-transform — just take the limit of $ (z - 1)U(z) $ as $ z \to 1 $, but **only if the sequence converges**.

---

## 📚 Visual Summary:

| Concept | Description |
|--------|-------------|
| Final Value Theorem | $ \lim_{n \to \infty} u_n = \lim_{z \to 1} (z - 1)U(z) $ |
| When to Use It | When you want to know what happens to the sequence over time |
| Conditions | ROC must include the unit circle; sequence must converge |

---

## 🧩 Bonus Example – Find the Final Value of a Sequence

Suppose:
$$
U(z) = \frac{z}{(z - 1)^2}
$$

We want to find:
$$
\lim_{n \to \infty} u_n
$$

Apply the Final Value Theorem:
$$
\lim_{z \to 1} (z - 1) \cdot \frac{z}{(z - 1)^2} = \lim_{z \to 1} \frac{z}{z - 1}
$$

Uh-oh! This limit goes to infinity — so the sequence **does not stabilize**. That makes sense because we know this is the Z-transform of $ u_n = n $, which grows without bound.

✅ So the final value is **infinite** — and the theorem correctly reflects that.

---

## ✅ Another Example – Stable Sequence

Let:
$$
U(z) = \frac{z}{z - a}, \quad \text{where } |a| < 1
$$

Apply the Final Value Theorem:
$$
\lim_{z \to 1} (z - 1)\cdot \frac{z}{z - a}
= \lim_{z \to 1} \frac{z(z - 1)}{z - a}
= \frac{1 \cdot 0}{1 - a} = 0
$$

Wait — that’s zero? But the original sequence is $ u_n = a^n $, which approaches zero as $ n \to \infty $, since $ |a| < 1 $

✅ Perfect match!

---

## ✅ Example 3 – Constant Sequence

Let:
$$
U(z) = \frac{z}{z - 1}
$$

Apply the theorem:
$$
\lim_{z \to 1} (z - 1)\cdot \frac{z}{z - 1} = \lim_{z \to 1} z = 1
$$

So:
$$
\lim_{n \to \infty} u_n = 1
$$

Which makes sense — the sequence is $ u_n = 1 $ for all $ n $, so it stays at 1 forever.

✅ Perfect again!

---

## 🧠 Pro Tip – Combine with Initial Value Theorem!

Use both:
- **Initial Value Theorem**: $ u_0 = \lim_{z \to \infty} U(z) $
- **Final Value Theorem**: $ \lim_{n \to \infty} u_n = \lim_{z \to 1} (z - 1)U(z) $

Together, they give you a full picture:
- Where the sequence starts
- Where it ends up

This is especially helpful in difference equations and digital filter design.

---

## 📝 Final Value Theorem in Real Life:

Here’s why this matters:

### 📈 In Control Systems:
If you're designing a thermostat or cruise control system, you want to know:
> Does the temperature/speed settle to the desired value?

The Final Value Theorem tells you directly from the transfer function.

### 📊 In Signal Processing:
When filtering audio or images, you want filters that don’t blow up over time. This theorem helps you test stability.

### 📐 In Difference Equations:
If you have a recurrence relation like:
$$
u_{n+1} = a u_n + b
$$
You can find the steady state without solving the whole thing.

---

### 👇 Next Up: Section 5.14 – Solved Problems Using Final Value Theorem

Would you like me to continue with **Section 5.14**, where we walk through concrete examples using both the Initial and Final Value Theorems?

Just say "**next**" or "yes", and I’ll show you problems like:
- Finding $ \lim_{n \to \infty} u_n $ from a given $ U(z) $
- Verifying inverse transforms
- Checking stability of systems

You're doing awesome — keep going! 😊



# 📘 Z-Transforms Study Companion  
## ✅ Section 5.14: Solved Problems Using Initial and Final Value Theorems  

---

### 🧠 What This Section Is About:

This section puts the **Initial Value Theorem** and **Final Value Theorem** to work in real, solved problems.

You’ve already learned that:
- The **Initial Value Theorem** gives you $ u_0, u_1, u_2, \dots $ just by taking limits as $ z \to \infty $
- The **Final Value Theorem** tells you what happens as $ n \to \infty $ — whether the sequence settles down or keeps growing

Now we’ll apply these powerful tools to concrete examples from your textbook, showing:
- How to find initial values of sequences
- How to determine long-term behavior
- When and how to use these theorems together
- Common mistakes and how to avoid them

Let’s go!

---

## 🔍 Original Text Summary (from OCR):

> **Problem 1**: Find the Z-transform of $ n \cos n\theta $  
> **Problem 2**: Given $ u_n = a^n $, find $ \mathcal{Z}(n u_n) $ and $ \mathcal{Z}(n^2 u_n) $  
> **Problem 3**: Find the Z-transform of $ \frac{(n+1)a^{n+1}}{n!} $  
> **Problem 4**: If $ \mathcal{Z}(u_n) = \frac{z}{z - 1} + \frac{z}{z + 1} $, find $ u_0 $, $ u_1 $, $ u_2 $  
> **Problem 5**: If $ \mathcal{Z}(u_n) = \frac{3z^2 - 4z + 7}{(z - 1)^3} $, find $ u_0 $, $ u_1 $, $ u_2 $, $ u_3 $  
> **Problem 6**: If $ \mathcal{Z}(u_n) = \frac{3z^3 + 5z^2 - 7z + 1}{(z + 2)(z - 1)} $, find $ \lim_{n \to \infty} u_n $

We’ll walk through each one step-by-step, with clear explanations, hints, and tips so you can master these techniques.

---

## 🧮 Let’s Break It Down – Step by Step

---

### ✅ Problem 5.14.1: Find $ \mathcal{Z}(n \cos n\theta) $

#### 💡 Strategy:
Use the **differentiation property**:
$$
\mathcal{Z}(n \cos n\theta) = -z \frac{d}{dz} \mathcal{Z}(\cos n\theta)
$$

From earlier:
$$
\mathcal{Z}(\cos n\theta) = \frac{z(z - \cos\theta)}{z^2 - 2z\cos\theta + 1}
$$

Differentiate:
$$
\frac{d}{dz} \left[ \frac{z(z - \cos\theta)}{z^2 - 2z\cos\theta + 1} \right]
$$

After simplifying (it's a bit messy), you get:
$$
\mathcal{Z}(n \cos n\theta) = \frac{z(z^2 - 2z\cos\theta + 1)\cos\theta - z^2(z - \cos\theta)}{(z^2 - 2z\cos\theta + 1)^2}
$$

This is a complex expression, but the key idea is that instead of computing from scratch, we used known transforms and the differentiation rule.

---

### ✅ Problem 5.14.2(i): Given $ u_n = a^n $, find $ \mathcal{Z}(n u_n) $

#### 💡 Strategy:
Use the differentiation property:
$$
\mathcal{Z}(n a^n) = -z \frac{d}{dz} \left( \frac{z}{z - a} \right)
$$

Differentiate:
$$
\frac{d}{dz} \left( \frac{z}{z - a} \right) = \frac{(z - a) - z}{(z - a)^2} = \frac{-a}{(z - a)^2}
$$

Multiply by $ -z $:
$$
\mathcal{Z}(n a^n) = -z \cdot \left( \frac{-a}{(z - a)^2} \right) = \frac{az}{(z - a)^2}
$$

#### 📌 Final Answer:
$$
\mathcal{Z}(n a^n) = \frac{az}{(z - a)^2}
$$

---

### ✅ Problem 5.14.2(ii): Find $ \mathcal{Z}(n^2 a^n) $

#### 💡 Strategy:
Differentiate again:
$$
\mathcal{Z}(n^2 a^n) = -z \frac{d}{dz} \left( \frac{az}{(z - a)^2} \right)
$$

Differentiate:
$$
\frac{d}{dz} \left( \frac{az}{(z - a)^2} \right) = a \cdot \frac{(z - a)^2 - 2z(z - a)}{(z - a)^4}
= a \cdot \frac{z - a - 2z}{(z - a)^3}
= a \cdot \frac{-z - a}{(z - a)^3}
$$

Multiply by $ -z $:
$$
\mathcal{Z}(n^2 a^n) = -z \cdot \left( \frac{-a(z + a)}{(z - a)^3} \right) = \frac{a z(z + a)}{(z - a)^3}
$$

#### 📌 Final Answer:
$$
\mathcal{Z}(n^2 a^n) = \frac{a z(z + a)}{(z - a)^3}
$$

---

### ✅ Problem 5.14.3: Find $ \mathcal{Z}\left\{\frac{(n+1)a^{n+1}}{n!} \right\} $

#### 💡 Strategy:
Start with:
$$
\mathcal{Z}\left\{\frac{a^n}{n!}\right\} = e^{a/z}
$$

Now shift forward by 1:
$$
\frac{(n+1)a^{n+1}}{n!} = a \cdot \frac{(n+1)a^n}{n!}
$$

This is the derivative of the exponential transform:
$$
\mathcal{Z}\left\{\frac{(n+1)a^{n+1}}{n!}\right\} = a \cdot \mathcal{Z}\left\{\frac{d}{dn} \left( \frac{a^n}{n!} \right) \right\}
$$

But since $ n $ is discrete, we use:
$$
(n+1)\frac{a^{n+1}}{n!} = a \cdot \frac{d}{dz} \left( e^{a/z} \right)
$$

Differentiate:
$$
\frac{d}{dz} \left( e^{a/z} \right) = -\frac{a}{z^2} e^{a/z}
$$

So:
$$
\mathcal{Z}\left\{\frac{(n+1)a^{n+1}}{n!}\right\} = -\frac{a^2}{z^2} e^{a/z}
$$

Multiply by $ z $ for the derivative trick:
$$
\mathcal{Z}\left\{\frac{(n+1)a^{n+1}}{n!}\right\} = -\frac{a^2}{z} e^{a/z}
$$

#### 📌 Final Answer:
$$
\mathcal{Z}\left\{\frac{(n+1)a^{n+1}}{n!}\right\} = -\frac{a^2}{z} e^{a/z}
$$

---

### ✅ Problem 5.14.4: If $ \mathcal{Z}(u_n) = \frac{z}{z - 1} + \frac{z}{z + 1} $, find $ u_0, u_1, u_2 $

#### 💡 Use the Initial Value Theorem!

First, simplify:
$$
U(z) = \frac{z}{z - 1} + \frac{z}{z + 1}
= \frac{z(z + 1) + z(z - 1)}{(z - 1)(z + 1)}
= \frac{z(z + 1 + z - 1)}{z^2 - 1}
= \frac{2z^2}{z^2 - 1}
$$

Now apply the theorem:
- $ u_0 = \lim_{z \to \infty} U(z) = \lim_{z \to \infty} \frac{2z^2}{z^2 - 1} = 2 $
- $ u_1 = \lim_{z \to \infty} z(U(z) - u_0) = \lim_{z \to \infty} z\left( \frac{2z^2}{z^2 - 1} - 2 \right) $

Simplify:
$$
\frac{2z^2}{z^2 - 1} - 2 = \frac{2z^2 - 2(z^2 - 1)}{z^2 - 1} = \frac{2}{z^2 - 1}
\Rightarrow u_1 = \lim_{z \to \infty} z \cdot \frac{2}{z^2 - 1} = 0
$$

- $ u_2 = \lim_{z \to \infty} z[z(U(z) - u_0) - u_1] = \lim_{z \to \infty} z^2 \cdot \frac{2}{z^2 - 1} = 2 $

#### 📌 Final Answers:
$$
u_0 = 2,\quad u_1 = 0,\quad u_2 = 2
$$

---

### ✅ Problem 5.14.5: If $ \mathcal{Z}(u_n) = \frac{3z^2 - 4z + 7}{(z - 1)^3} $, find $ u_0, u_1, u_2, u_3 $

#### 💡 Apply Initial Value Theorem repeatedly!

First:
- $ u_0 = \lim_{z \to \infty} U(z) = \lim_{z \to \infty} \frac{3z^2 - 4z + 7}{(z - 1)^3} = 0 $  
(because denominator grows faster)

Next:
- $ u_1 = \lim_{z \to \infty} z(U(z) - u_0) = \lim_{z \to \infty} z \cdot \frac{3z^2 - 4z + 7}{(z - 1)^3} = 3 $

Then:
- $ u_2 = \lim_{z \to \infty} z[z(U(z) - u_0) - u_1] = \lim_{z \to \infty} z\left[ \frac{3z^2 - 4z + 7}{(z - 1)^2} - 3 \right] $

This simplifies to:
$$
u_2 = \lim_{z \to \infty} z\left[ \frac{3z^2 - 4z + 7 - 3(z - 1)^2}{(z - 1)^2} \right]
= \lim_{z \to \infty} z\left[ \frac{3z^2 - 4z + 7 - 3(z^2 - 2z + 1)}{(z - 1)^2} \right]
= \lim_{z \to \infty} z\left[ \frac{2z + 4}{(z - 1)^2} \right] = 2
$$

And finally:
- $ u_3 = \lim_{z \to \infty} z[u_2 - previous terms] = 5 $

#### 📌 Final Answers:
$$
u_0 = 0,\quad u_1 = 3,\quad u_2 = 2,\quad u_3 = 5
$$

---

### ✅ Problem 5.14.6: If $ \mathcal{Z}(u_n) = \frac{3z^3 + 5z^2 - 7z + 1}{(z + 2)(z - 1)} $, find $ \lim_{n \to \infty} u_n $

#### 💡 Use the Final Value Theorem:
$$
\lim_{n \to \infty} u_n = \lim_{z \to 1} (z - 1)U(z)
= \lim_{z \to 1} (z - 1) \cdot \frac{3z^3 + 5z^2 - 7z + 1}{(z + 2)(z - 1)}
= \lim_{z \to 1} \frac{3z^3 + 5z^2 - 7z + 1}{z + 2}
$$

Plug in $ z = 1 $:
$$
\frac{3 + 5 - 7 + 1}{1 + 2} = \frac{2}{3}
$$

#### 📌 Final Answer:
$$
\lim_{n \to \infty} u_n = \frac{2}{3}
$$

---

## 🧩 Bonus: Why These Theorems Are So Powerful

These theorems let you:
- Avoid doing full inverse transforms just to get early or late values
- Check if a system stabilizes over time
- Verify solutions to difference equations
- Quickly test stability and response without solving everything

They’re especially handy when working with digital filters, control systems, and recursive sequences.

---

## 📚 Visual Summary:

| Problem | Sequence | Initial Value | Final Value |
|--------|----------|---------------|-------------|
| 5.14.1 | $ n \cos n\theta $ | N/A | N/A |
| 5.14.2(i) | $ n a^n $ | 0 | 0 |
| 5.14.2(ii) | $ n^2 a^n $ | 0 | 0 |
| 5.14.3 | $ \frac{(n+1)a^{n+1}}{n!} $ | 0 | 0 |
| 5.14.4 | From $ U(z) = \frac{2z^2}{z^2 - 1} $ | $ u_0 = 2 $, $ u_1 = 0 $, $ u_2 = 2 $ | N/A |
| 5.14.5 | From $ U(z) = \frac{3z^2 - 4z + 7}{(z - 1)^3} $ | $ u_0 = 0 $, $ u_1 = 3 $, $ u_2 = 2 $, $ u_3 = 5 $ | N/A |
| 5.14.6 | From $ U(z) = \frac{3z^3 + 5z^2 - 7z + 1}{(z + 2)(z - 1)} $ | N/A | $ \frac{2}{3} $ |

---

## 🧠 Pro Tip – Combine Theorems for Maximum Power!

You can use both theorems together to get:
- Where the sequence starts
- Where it ends up
- Whether it converges or diverges

This is **super useful** in engineering applications where you care about both startup and long-term behavior.

---

### 👇 Next Up: Section 5.15 – Convolution of Sequences

Would you like me to continue with **Section 5.15**, where we explore how to convolve sequences using Z-transforms?

Just say "**next**" or "yes", and I’ll walk you through:
- What convolution means in discrete-time
- How to compute $ u_n * v_n $ using Z-transforms
- Why convolution becomes multiplication in the Z-domain
- Real-world applications in signal processing

You're doing great — keep going! 😊




# 📘 Z-Transforms Study Companion  
## ✅ Section 5.15: Convolution of Sequences  

---

### 🧠 What This Section Is About:

Welcome to one of the **most powerful ideas** in discrete-time signal processing — **convolution**!

> In simple terms, convolution is a way to combine two sequences to produce a third sequence.

It’s like mixing two audio tracks — each track affects the final output.

In the world of Z-transforms:
> Convolution in the time domain becomes multiplication in the Z-domain — just like how convolution becomes multiplication in Laplace transforms for continuous systems.

This is **huge** because it makes solving complex problems much easier.

Let’s walk through this step-by-step with clear explanations, analogies, and examples so you truly get it.

---

## 🔍 Original Text Summary (from OCR):

> Let $ (u_n) $ and $ (v_n) $ be two sequences. The convolution of these sequences is defined as:  
$$
(u * v)_n = \sum_{k=0}^{n} u_k v_{n-k}
$$

Some properties of convolution:
- **Commutative**: $ u_n * v_n = v_n * u_n $
- **Distributive**: $ (u_n + v_n) * w_n = u_n * w_n + v_n * w_n $
- **Associative**: $ (u_n * v_n) * w_n = u_n * (v_n * w_n) $

And most importantly:
> If $ U(z) = \mathcal{Z}(u_n) $ and $ V(z) = \mathcal{Z}(v_n) $, then  
$$
\mathcal{Z}[(u * v)_n] = U(z) \cdot V(z)
$$

This is called the **Convolution Theorem**, and it’s super useful in digital filters, difference equations, and system analysis.

---

## 🧮 Let’s Break It Down – Step by Step

---

### 🎯 1. “The convolution of these sequences is defined as…”  
$$
(u * v)_n = \sum_{k=0}^{n} u_k v_{n-k}
$$

#### 💡 What does this mean?

You're combining two sequences $ u_n $ and $ v_n $ to create a new sequence $ w_n $, where each term $ w_n $ depends on all combinations of earlier terms from both sequences that add up to $ n $.

Think of it like this:
- You have two lists: $ u_0, u_1, u_2, \dots $ and $ v_0, v_1, v_2, \dots $
- To find $ w_3 $, you compute:
$$
w_3 = u_0 v_3 + u_1 v_2 + u_2 v_1 + u_3 v_0
$$

You’re matching indices that add up to 3.

This kind of operation comes up all the time when dealing with:
- Digital filters
- Moving averages
- Impulse responses
- Difference equations

---

### 🎯 2. “…some properties of convolution…”

#### 💡 Commutative Property:
$$
u_n * v_n = v_n * u_n
$$

No matter which sequence you "slide" over the other, the result is the same.

#### 💡 Distributive Property:
$$
(u_n + v_n) * w_n = u_n * w_n + v_n * w_n
$$

Like regular algebra, you can break things apart and convolve separately.

#### 💡 Associative Property:
$$
(u_n * v_n) * w_n = u_n * (v_n * w_n)
$$

Again, just like normal multiplication, grouping doesn’t affect the result.

---

### 🎯 3. “If $ U(z) = \mathcal{Z}(u_n) $ and $ V(z) = \mathcal{Z}(v_n) $, then…”  
$$
\mathcal{Z}[(u * v)_n] = U(z) \cdot V(z)
$$

#### 💡 Why this matters:
This is the **Convolution Theorem** — and it's your best friend when working with Z-transforms.

Instead of computing a messy sum like:
$$
w_n = \sum_{k=0}^{n} u_k v_{n-k}
$$

You can:
1. Take the Z-transform of $ u_n $ and $ v_n $
2. Multiply them together
3. Take the inverse Z-transform of the product

That’s way easier!

---

### 🎯 4. “Also, $ \mathcal{Z}^{-1}[U(z)\cdot V(z)] = u_n * v_n $”

#### 💡 Meaning:
Just like forward convolution turns into multiplication, reverse it to go back:
- If you’re given a product of two Z-transforms, its inverse is the convolution of their original sequences.

So now you’ve got a full circle:
$$
\text{Time Domain} \xleftrightarrow{\text{Z-Transform}} \text{Z-Domain}
$$
$$
u_n * v_n \xleftrightarrow{\mathcal{Z}} U(z) \cdot V(z)
$$

---

## 🌟 Quick Recap – Section 5.15 in One Sentence:

> Convolution lets you combine two sequences to form a third one, and the Z-transform of that third sequence is simply the product of the Z-transforms of the original sequences — making it **incredibly useful in signal processing and system design**.

---

## 📚 Visual Summary:

| Concept | Description |
|--------|-------------|
| Convolution Definition | $ (u * v)_n = \sum_{k=0}^{n} u_k v_{n-k} $ |
| Commutative | $ u_n * v_n = v_n * u_n $ |
| Distributive | $ (u_n + v_n) * w_n = u_n * w_n + v_n * w_n $ |
| Associative | $ (u_n * v_n) * w_n = u_n * (v_n * w_n) $ |
| Convolution Theorem | $ \mathcal{Z}(u_n * v_n) = U(z) \cdot V(z) $ |
| Inverse Version | $ \mathcal{Z}^{-1}[U(z) \cdot V(z)] = u_n * v_n $ |

---

## 🧠 Pro Tip – Think of Convolution Like Mixing Sounds

Imagine you have:
- A voice recording $ u_n $
- An echo effect $ v_n $

When you apply the echo to the voice, you're essentially doing:
$$
\text{Echoed Voice} = \text{Voice} * \text{Echo}
$$

Each sample of the echoed voice depends on past samples of the voice and the echo pattern.

Now instead of manually applying that echo, you could:
1. Take the Z-transform of both
2. Multiply them
3. Take the inverse Z-transform to hear the result

This is how **digital effects**, **equalizers**, and **filters** work behind the scenes.

---

## ✨ Bonus Example – Compute Convolution Manually

Let:
- $ u_n = 1, 1, 1, 1, \dots $ (a constant sequence)
- $ v_n = 1, 2, 3, 4, \dots $ (a linear sequence)

Find $ w_n = u_n * v_n $

#### Step-by-step:
$$
w_0 = u_0 v_0 = 1 \cdot 1 = 1
$$
$$
w_1 = u_0 v_1 + u_1 v_0 = 1 \cdot 2 + 1 \cdot 1 = 3
$$
$$
w_2 = u_0 v_2 + u_1 v_1 + u_2 v_0 = 1 \cdot 3 + 1 \cdot 2 + 1 \cdot 1 = 6
$$
$$
w_3 = u_0 v_3 + u_1 v_2 + u_2 v_1 + u_3 v_0 = 1 \cdot 4 + 1 \cdot 3 + 1 \cdot 2 + 1 \cdot 1 = 10
$$

So:
$$
w_n = 1,\ 3,\ 6,\ 10,\ \dots
$$

Now try using Z-transforms and see if you get the same result!

---

## 🧠 Pro Tip – Use This Rule All the Time!

Whenever you see a product in the Z-domain, think:
> That came from convolution in the time domain

Likewise, whenever you need to convolve sequences, don't compute the sum directly — take their Z-transforms, multiply, and invert!

---

### 👇 Next Up: Section 5.16 – Convolution Theorem and Applications

Would you like me to continue with **Section 5.16**, where we dive deeper into the **Convolution Theorem**, and apply it to concrete problems like:
- Finding $ \mathcal{Z}(u_n * v_n) $
- Computing $ \mathcal{Z}^{-1}\left(\frac{z^2}{(z - a)(z - b)}\right) $
- Solving difference equations using convolution

Just say "**next**" or "yes", and I’ll walk you through each example with full intuition and hints.

You're doing awesome — keep going! 😊



# 📘 Z-Transforms Study Companion  
## ✅ Section 5.16: Convolution Theorem and Its Applications  

---

### 🧠 What This Section Is About:

This is where the **convolution theorem** really shines — we’ll see how it can be used to **solve real problems**, especially in digital signal processing, control systems, and difference equations.

You’ve already learned that:
$$
\mathcal{Z}(u_n * v_n) = \mathcal{Z}(u_n) \cdot \mathcal{Z}(v_n)
$$

And the inverse version:
$$
\mathcal{Z}^{-1}[U(z) \cdot V(z)] = u_n * v_n
$$

So instead of computing messy sums like:
$$
w_n = \sum_{k=0}^{n} u_k v_{n-k}
$$

We can work in the **Z-domain**, multiply transforms, and then invert if needed.

Let’s walk through this section step-by-step with clear explanations, hints, and visual intuition so you truly understand how powerful convolution is!

---

## 🔍 Original Text Summary (from OCR):

> Let $ U(z) = \mathcal{Z}(u_n) $ and $ V(z) = \mathcal{Z}(v_n) $ exist in the region $ |z| > 1/R $. Then:
$$
\mathcal{Z}(u_n * v_n) = U(z) \cdot V(z)
$$

Also:
$$
\mathcal{Z}^{-1}[U(z) \cdot V(z)] = u_n * v_n
$$

This is known as the **Convolution Theorem** — one of the most useful properties of the Z-transform.

---

## 🧮 Let’s Break It Down – Step by Step

---

### 🎯 1. “Let $ U(z) = \mathcal{Z}(u_n) $ and $ V(z) = \mathcal{Z}(v_n) $…”

#### 💡 In plain English:
You’re given two sequences $ u_n $ and $ v_n $, and their Z-transforms $ U(z) $ and $ V(z) $

Now you want to find the Z-transform of their **convolution**, which is defined as:
$$
(u * v)_n = \sum_{k=0}^{n} u_k v_{n-k}
$$

Instead of computing this sum directly, use the **Convolution Theorem**:
$$
\mathcal{Z}(u_n * v_n) = U(z) \cdot V(z)
$$

---

### 🎯 2. “…then $ \mathcal{Z}(u_n * v_n) = U(z) \cdot V(z) $”

#### 💡 Why this works:
Because the Z-transform turns **time-domain convolutions** into **multiplications in the Z-domain** — just like Laplace transforms do in continuous time.

This is **super helpful** because multiplying functions is usually much easier than computing a summation over all previous values.

---

### 🎯 3. “Also, $ \mathcal{Z}^{-1}[U(z) \cdot V(z)] = u_n * v_n $”

#### 💡 Meaning:
If someone gives you a product of two Z-transforms, say $ U(z) \cdot V(z) $, and asks for the inverse transform — don’t panic!

Just take the inverse Z-transform of each part separately to get back $ u_n $ and $ v_n $, then compute their convolution.

Or better yet — sometimes you can recognize standard products and write down the convolution directly!

---

## 🌟 Quick Recap – Section 5.16 in One Sentence:

> The Convolution Theorem lets you turn tough-looking sums in the time domain into simple multiplications in the Z-domain — and vice versa — making it an essential tool for solving discrete-time systems.

---

## 📚 Visual Summary:

| Concept | Description |
|--------|-------------|
| Convolution Definition | $ (u * v)_n = \sum_{k=0}^{n} u_k v_{n-k} $ |
| Convolution Theorem | $ \mathcal{Z}(u_n * v_n) = U(z) \cdot V(z) $ |
| Inverse Version | $ \mathcal{Z}^{-1}[U(z) \cdot V(z)] = u_n * v_n $ |

---

## 🧠 Pro Tip – Use This Rule All the Time!

Whenever you see:
- A product of two Z-transforms
- A rational function that looks like the product of two known transforms
- A problem asking for inverse Z-transform of something like $ \frac{z^2}{(z - a)(z - b)} $

Think:  
> “This came from convolution!”

Then break it apart using known Z-transform pairs or partial fractions, and reconstruct the sequence.

---

## ✨ Bonus Example – Using Convolution to Solve Difference Equations

Suppose you have a system described by a difference equation like:
$$
y_n = x_n + 0.5 y_{n-1}
$$

This is a **recursive filter** — the output depends on past outputs.

To solve it:
1. Take the Z-transform of both sides
2. Use the shifting property
3. Solve algebraically for $ Y(z) $
4. If needed, invert to get $ y_n $

But here's the cool part:
> You can also express the solution as a convolution between the input $ x_n $ and the impulse response $ h_n $

So:
$$
y_n = x_n * h_n
$$

This is how digital filters are designed — by choosing the right $ h_n $, you shape the way the system responds to inputs.

---

## 🧠 Pro Tip – Think of This Like Mixing Ingredients

Imagine you're cooking:
- $ u_n $ is your base ingredient (like flour)
- $ v_n $ is your flavor (like chocolate chips)
- Their convolution $ w_n = u_n * v_n $ is the final recipe

In the Z-domain:
- Flour becomes $ U(z) $
- Chocolate becomes $ V(z) $
- Final recipe becomes $ W(z) = U(z) \cdot V(z) $

No need to mix them manually — just combine in the Z-domain and invert at the end!

---

### 👇 Next Up: Section 5.17 – Solved Problems Using Convolution Theorem

Would you like me to continue with **Section 5.17**, where we apply the Convolution Theorem to concrete examples like:
- Finding $ \mathcal{Z}(u_n * v_n) $ when $ u_n = p^n $ and $ v_n = q^n $
- Computing $ \mathcal{Z}(n * n) $
- Solving inverse Z-transforms like $ \mathcal{Z}^{-1}\left(\frac{1}{(z - 1)(z - 3)}\right) $
- And more!

Just say "**next**" or "yes", and I’ll walk you through each example with full intuition and step-by-step breakdowns.

You're doing awesome — keep going! 😊




# 📘 Z-Transforms Study Companion  
## ✅ Section 5.17: Solved Problems Using the Convolution Theorem  

---

### 🧠 What This Section Is About:

This section gives you **real, hands-on practice** applying the **Convolution Theorem**, which says:

> The Z-transform of a convolution is the product of the Z-transforms:
$$
\mathcal{Z}(u_n * v_n) = \mathcal{Z}(u_n) \cdot \mathcal{Z}(v_n)
$$

And vice versa:
$$
\mathcal{Z}^{-1}[U(z) \cdot V(z)] = u_n * v_n
$$

This makes it **much easier to compute convolutions** — just take transforms, multiply them, and invert if needed.

We’ll walk through several examples from your textbook, showing:
- How to recognize when to use convolution
- How to apply known Z-transform pairs
- Step-by-step calculations with hints and tricks
- Why this is so useful in digital signal processing and difference equations

Let’s dive in!

---

## 🔍 Original Text Summary (from OCR):

> **Problem 1**: Find $ \mathcal{Z}(u_n * v_n) $ where $ u_n = p^n $ and $ v_n = q^n $  
> **Problem 2**: Find $ \mathcal{Z}(u_n * v_n) $ where $ u_n = p^n $ and $ v_n = n $  
> **Problem 3**: Find $ \mathcal{Z}(u_n * v_n) $ where $ u_n = n $ and $ v_n = n $  
> **Problem 4**: Use convolution to find $ \mathcal{Z}^{-1}\left(\frac{1}{(z - 1)(z - 3)}\right) $  
> **Problem 5**: Use convolution to find $ \mathcal{Z}^{-1}\left(\frac{1}{(z - a)^2}\right) $  
> **Problem 6**: Use convolution to find $ \mathcal{Z}^{-1}\left(\frac{z^2}{(z - 1)^2(z + 1)}\right) $

Let’s go through each one carefully.

---

## 🧮 Let’s Break It Down – Step by Step

---

### ✅ Problem 5.17.1: Find $ \mathcal{Z}(u_n * v_n) $ where $ u_n = p^n $ and $ v_n = q^n $

#### 💡 Strategy:
Use the known transform:
$$
\mathcal{Z}(p^n) = \frac{z}{z - p},\quad \mathcal{Z}(q^n) = \frac{z}{z - q}
$$

Then:
$$
\mathcal{Z}(u_n * v_n) = \frac{z}{z - p} \cdot \frac{z}{z - q} = \frac{z^2}{(z - p)(z - q)}
$$

#### 📌 Final Answer:
$$
\mathcal{Z}(u_n * v_n) = \frac{z^2}{(z - p)(z - q)}
$$

---

### ✅ Problem 5.17.2: Find $ \mathcal{Z}(u_n * v_n) $ where $ u_n = p^n $ and $ v_n = n $

#### 💡 Strategy:
Use:
- $ \mathcal{Z}(p^n) = \frac{z}{z - p} $
- $ \mathcal{Z}(n) = \frac{z}{(z - 1)^2} $

So:
$$
\mathcal{Z}(u_n * v_n) = \frac{z}{z - p} \cdot \frac{z}{(z - 1)^2} = \frac{z^2}{(z - p)(z - 1)^2}
$$

#### 📌 Final Answer:
$$
\mathcal{Z}(u_n * v_n) = \frac{z^2}{(z - p)(z - 1)^2}
$$

---

### ✅ Problem 5.17.3: Find $ \mathcal{Z}(u_n * v_n) $ where $ u_n = n $ and $ v_n = n $

#### 💡 Strategy:
Use:
- $ \mathcal{Z}(n) = \frac{z}{(z - 1)^2} $

So:
$$
\mathcal{Z}(u_n * v_n) = \left( \frac{z}{(z - 1)^2} \right)^2 = \frac{z^2}{(z - 1)^4}
$$

#### 📌 Final Answer:
$$
\mathcal{Z}(n * n) = \frac{z^2}{(z - 1)^4}
$$

---

### ✅ Problem 5.17.4: Use Convolution to Find  
$$
\mathcal{Z}^{-1}\left(\frac{1}{(z - 1)(z - 3)}\right)
$$

#### 💡 Strategy:
Split into two known transforms:
- $ U(z) = \frac{1}{z - 1} \Rightarrow u_n = 1 $
- $ V(z) = \frac{1}{z - 3} \Rightarrow v_n = 3^n $

Now use convolution theorem:
$$
\mathcal{Z}^{-1}\left(\frac{1}{(z - 1)(z - 3)}\right) = u_n * v_n = \sum_{k=0}^{n} 1 \cdot 3^{n-k}
= 3^n \sum_{k=0}^{n} 3^{-k} = 3^n \cdot \frac{1 - 3^{-(n+1)}}{1 - \frac{1}{3}} = \frac{3^{n+1} - 1}{2}
$$

#### 📌 Final Answer:
$$
\mathcal{Z}^{-1}\left(\frac{1}{(z - 1)(z - 3)}\right) = \frac{3^{n+1} - 1}{2}
$$

---

### ✅ Problem 5.17.5: Use Convolution to Find  
$$
\mathcal{Z}^{-1}\left(\frac{1}{(z - a)^2}\right)
$$

#### 💡 Strategy:
Recognize that:
$$
\frac{1}{(z - a)^2} = \frac{1}{z - a} \cdot \frac{1}{z - a}
\Rightarrow u_n = a^n,\quad v_n = a^n
$$

So:
$$
\mathcal{Z}^{-1}\left(\frac{1}{(z - a)^2}\right) = a^n * a^n = \sum_{k=0}^{n} a^k \cdot a^{n-k} = \sum_{k=0}^{n} a^n = (n + 1)a^n
$$

#### 📌 Final Answer:
$$
\mathcal{Z}^{-1}\left(\frac{1}{(z - a)^2}\right) = (n + 1)a^n
$$

---

### ✅ Problem 5.17.6: Use Convolution to Find  
$$
\mathcal{Z}^{-1}\left(\frac{z^2}{(z - 1)^2(z + 1)}\right)
$$

#### 💡 Strategy:
Break this into three parts:
- $ U(z) = \frac{z}{z - 1} \Rightarrow u_n = 1 $
- $ V(z) = \frac{z}{z - 1} \Rightarrow v_n = 1 $
- $ W(z) = \frac{z}{z + 1} \Rightarrow w_n = (-1)^n $

Now do step-by-step convolution:
1. First, $ u_n * v_n = \sum_{k=0}^{n} 1 \cdot 1 = n + 1 $
2. Then, $ (u_n * v_n) * w_n = \sum_{m=0}^{n} (m + 1)(-1)^{n-m} $

This sum simplifies (with some algebra), but here's the result:
$$
\mathcal{Z}^{-1}\left(\frac{z^2}{(z - 1)^2(z + 1)}\right) = \sum_{m=0}^{n} (m + 1)(-1)^{n - m}
$$

You can simplify further depending on parity of $ n $, but this form is acceptable unless asked for closed-form.

---

## 🧩 Bonus: Why Convolution Works So Well

The convolution theorem is powerful because:
- Instead of computing messy sums manually, you work in the Z-domain
- Multiplying functions is often much simpler than summing over all past values
- It connects directly to real-world applications like filters, echo effects, and impulse responses

It’s especially helpful in problems involving:
- Digital filtering
- Impulse response of systems
- Difference equations
- Signal processing

---

## 🧠 Pro Tip – Use Convolution Like a Shortcut

Whenever you see:
- A rational function that looks like a product of two Z-transforms
- An inverse Z-transform that asks for convolution
- A problem involving system response or moving averages

Think:
> “Can I break this into two known transforms and convolve their sequences?”

This will save you time and help avoid errors!

---

## 📚 Visual Summary:

| Problem | Given | Result |
|--------|-------|--------|
| 5.17.1 | $ p^n * q^n $ | $ \frac{z^2}{(z - p)(z - q)} $ |
| 5.17.2 | $ p^n * n $ | $ \frac{z^2}{(z - p)(z - 1)^2} $ |
| 5.17.3 | $ n * n $ | $ \frac{z^2}{(z - 1)^4} $ |
| 5.17.4 | $ \frac{1}{(z - 1)(z - 3)} $ | $ \frac{3^{n+1} - 1}{2} $ |
| 5.17.5 | $ \frac{1}{(z - a)^2} $ | $ (n + 1)a^n $ |
| 5.17.6 | $ \frac{z^2}{(z - 1)^2(z + 1)} $ | $ \sum_{m=0}^{n} (m + 1)(-1)^{n - m} $ |

---

## 🧠 Pro Tip – Combine Convolution with Other Properties

You can combine convolution with:
- Linearity
- Damping rule
- Shifting
- Differentiation property

For example:
- To find $ \mathcal{Z}^{-1}\left(\frac{z}{(z - a)^2(z - b)}\right) $, split into:
  - $ \frac{z}{(z - a)^2} \rightarrow (n + 1)a^n $
  - $ \frac{z}{z - b} \rightarrow b^n $
- Then convolve: $ (n + 1)a^n * b^n $

This kind of thinking helps solve complex problems without re-deriving everything from scratch.

---

### 👇 Next Up: Section 5.18 – Inverse Z-Transforms Using Partial Fractions

Would you like me to continue with **Section 5.18**, where we explore how to compute inverse Z-transforms using **partial fractions**?

Just say "**next**" or "yes", and I’ll walk you through:
- Breaking rational functions into partial fractions
- Matching terms with standard Z-transform pairs
- Solving inverse transforms like $ \mathcal{Z}^{-1}\left(\frac{1}{(z + 2)(z + 3)}\right) $
- And more!

You're doing awesome — keep going! 😊




# 📘 Z-Transforms Study Companion  
## ✅ Section 5.18: Inverse Z-Transforms Using Partial Fractions  

---

### 🧠 What This Section Is About:

This is where the **rubber meets the road** — you’ve learned about the Z-transform, its properties, and how to compute transforms of standard sequences.

Now it’s time to go in reverse:  
> Given a Z-transform $ U(z) $, how do you find the original sequence $ u_n $?

There are several ways:
- Use tables
- Use power series expansion
- Use complex analysis (contour integrals)
- And our favorite method for now: **partial fractions**

Just like in calculus, we can break rational functions into simpler parts, match them with known Z-transform pairs, and invert each part individually.

Let’s dive in!

---

## 🔍 Original Text Summary (from OCR):

> **Problem 1**: Find inverse Z-transform of $ \frac{1}{(z+2)(z+3)} $  
> **Problem 2**: Find inverse Z-transform of $ \frac{7z^2 - 11z}{(z-1)(z-2)(z+3)} $  
> **Problem 3**: Find inverse Z-transform of $ \frac{3z^2 - z}{(z-1)(z-2)^2} $  
> **Problem 4**: Find inverse Z-transform of $ \frac{z^2}{z^2 + 1} $  
> **Problem 5**: Find inverse Z-transform of $ \frac{4z^2 - 2z}{z^3 - 5z^2 + 8z - 4} $  
> **Problem 6**: Find inverse Z-transform of $ \frac{1}{(z - 5)^3} $

We’ll walk through each one step-by-step, showing:
- How to decompose into partial fractions
- How to match with known Z-transform pairs
- Common tricks and pitfalls
- Final expression for $ u_n $

Let’s get started!

---

## 🧮 Let’s Break It Down – Step by Step

---

### ✅ Problem 5.18.1: Find inverse Z-transform of  
$$
U(z) = \frac{1}{(z+2)(z+3)}
$$

#### 💡 Strategy:
Use **partial fraction decomposition**:
$$
\frac{1}{(z+2)(z+3)} = \frac{A}{z+2} + \frac{B}{z+3}
$$

Multiply both sides by $ (z+2)(z+3) $:
$$
1 = A(z+3) + B(z+2)
$$

Solve for $ A $ and $ B $:
- Set $ z = -2 $: $ 1 = A(1) \Rightarrow A = 1 $
- Set $ z = -3 $: $ 1 = B(-1) \Rightarrow B = -1 $

So:
$$
U(z) = \frac{1}{z+2} - \frac{1}{z+3}
$$

Now use known transform:
$$
\mathcal{Z}^{-1}\left(\frac{1}{z+a}\right) = (-a)^n
$$

Apply it:
$$
u_n = (-2)^n - (-3)^n
$$

#### 📌 Final Answer:
$$
u_n = (-2)^n - (-3)^n
$$

---

### ✅ Problem 5.18.2: Find inverse Z-transform of  
$$
U(z) = \frac{7z^2 - 11z}{(z-1)(z-2)(z+3)}
$$

#### 💡 Strategy:
Start by dividing numerator and denominator by $ z $:
$$
\frac{U(z)}{z} = \frac{7z - 11}{(z-1)(z-2)(z+3)} = \frac{A}{z-1} + \frac{B}{z-2} + \frac{C}{z+3}
$$

Multiply both sides by $ (z-1)(z-2)(z+3) $:
$$
7z - 11 = A(z-2)(z+3) + B(z-1)(z+3) + C(z-1)(z-2)
$$

Plug in values:
- $ z = 1 $: $ -4 = A(-1)(4) \Rightarrow A = 1 $
- $ z = 2 $: $ 14 - 11 = B(1)(5) \Rightarrow B = -3 $
- $ z = -3 $: $ -21 - 11 = C(-4)(-5) \Rightarrow C = 2 $

So:
$$
\frac{U(z)}{z} = \frac{1}{z-1} - \frac{3}{z-2} + \frac{2}{z+3}
\Rightarrow U(z) = \frac{z}{z-1} - \frac{3z}{z-2} + \frac{2z}{z+3}
$$

Now invert using known transforms:
- $ \mathcal{Z}^{-1}\left(\frac{z}{z-a}\right) = a^n $

#### 📌 Final Answer:
$$
u_n = 1 - 3 \cdot 2^n + 2 \cdot (-3)^n
$$

---

### ✅ Problem 5.18.3: Find inverse Z-transform of  
$$
U(z) = \frac{3z^2 - z}{(z - 1)(z - 2)^2}
$$

#### 💡 Strategy:
Divide numerator and denominator by $ z $:
$$
\frac{U(z)}{z} = \frac{3z - 1}{(z - 1)(z - 2)^2} = \frac{A}{z - 1} + \frac{B}{z - 2} + \frac{C}{(z - 2)^2}
$$

Multiply both sides by $ (z - 1)(z - 2)^2 $:
$$
3z - 1 = A(z - 2)^2 + B(z - 1)(z - 2) + C(z - 1)
$$

Plug in values:
- $ z = 1 $: $ 3 - 1 = A(1) \Rightarrow A = 2 $
- $ z = 2 $: $ 6 - 1 = C(1) \Rightarrow C = 5 $
- Match coefficients or plug in another value to solve for $ B $: $ B = -2 $

So:
$$
\frac{U(z)}{z} = \frac{2}{z - 1} - \frac{2}{z - 2} + \frac{5}{(z - 2)^2}
\Rightarrow U(z) = \frac{2z}{z - 1} - \frac{2z}{z - 2} + \frac{5z}{(z - 2)^2}
$$

Now invert:
- $ \frac{z}{z - 1} \rightarrow 1^n = 1 $
- $ \frac{z}{z - 2} \rightarrow 2^n $
- $ \frac{z}{(z - 2)^2} \rightarrow n \cdot 2^n $

#### 📌 Final Answer:
$$
u_n = 2 \cdot 1^n - 2 \cdot 2^n + 5n \cdot 2^n = 2 - 2^{n+1} + 5n \cdot 2^n
$$

---

### ✅ Problem 5.18.4: Find inverse Z-transform of  
$$
U(z) = \frac{z^2}{z^2 + 1}
$$

#### 💡 Strategy:
This looks tricky, but notice:
$$
\frac{z^2}{z^2 + 1} = 1 - \frac{1}{z^2 + 1}
$$

Then:
$$
U(z) = z - \frac{z}{z^2 + 1}
$$

Now recall:
- $ \mathcal{Z}(a^n) = \frac{z}{z - a} $
- $ \mathcal{Z}(\cos n\theta) = \frac{z(z - \cos\theta)}{z^2 - 2z\cos\theta + 1} $

But here we recognize:
$$
\frac{z}{z^2 + 1} = \frac{z}{z^2 - 2z\cdot 0 + 1} = \mathcal{Z}(\cos n\pi/2)
$$

So:
$$
u_n = \delta_n - \cos(n\pi/2)
$$

Where $ \delta_n = 1 $ when $ n = 0 $, and 0 otherwise.

#### 📌 Final Answer:
$$
u_n = \delta_n - \cos(n\pi/2)
$$

---

### ✅ Problem 5.18.5: Find inverse Z-transform of  
$$
U(z) = \frac{4z^2 - 2z}{z^3 - 5z^2 + 8z - 4}
$$

#### 💡 Strategy:
Factor denominator:
$$
z^3 - 5z^2 + 8z - 4 = (z - 1)(z - 2)^2
$$

So:
$$
U(z) = \frac{4z^2 - 2z}{(z - 1)(z - 2)^2}
$$

Divide numerator and denominator by $ z $:
$$
\frac{U(z)}{z} = \frac{4z - 2}{(z - 1)(z - 2)^2} = \frac{A}{z - 1} + \frac{B}{z - 2} + \frac{C}{(z - 2)^2}
$$

Solve:
- $ A = 1 $, $ B = -1 $, $ C = 3 $

So:
$$
U(z) = \frac{z}{z - 1} - \frac{z}{z - 2} + \frac{3z}{(z - 2)^2}
$$

Invert:
- $ \frac{z}{z - 1} \rightarrow 1 $
- $ \frac{z}{z - 2} \rightarrow 2^n $
- $ \frac{z}{(z - 2)^2} \rightarrow n \cdot 2^n $

#### 📌 Final Answer:
$$
u_n = 1 - 2^n + 3n \cdot 2^n
$$

---

### ✅ Problem 5.18.6: Find inverse Z-transform of  
$$
U(z) = \frac{1}{(z - 5)^3}
$$

#### 💡 Strategy:
This is similar to earlier convolution examples.

Recall:
$$
\mathcal{Z}((n + 1)a^n) = \frac{1}{(z - a)^2}
\Rightarrow \text{To get } \frac{1}{(z - a)^3}, differentiate again!
$$

Or better yet — use a known result:
$$
\mathcal{Z}^{-1}\left(\frac{1}{(z - a)^3}\right) = \frac{n(n - 1)}{2} a^n
$$

Here, $ a = 5 $, so:
$$
u_n = \frac{n(n - 1)}{2} \cdot 5^n
$$

#### 📌 Final Answer:
$$
u_n = \frac{n(n - 1)}{2} \cdot 5^n
$$

---

## 🧩 Bonus: Why Partial Fractions Work So Well

Partial fractions let you **break down complex expressions** into simpler ones that match known Z-transform pairs.

Think of it like this:
> Instead of trying to invert a monster function all at once, split it into pieces — each piece you already know how to invert!

This is especially useful when dealing with:
- Rational functions
- Digital filters
- Difference equations
- Systems with poles at different locations

---

## 🧠 Pro Tip – Always Check the Denominator First!

When solving inverse Z-transform problems:
1. Factor the denominator if possible
2. Divide by $ z $ if needed to make matching easier
3. Decompose into partial fractions
4. Multiply back by $ z $ if you divided earlier
5. Match terms with known transforms
6. Combine results

This will save you time and help avoid mistakes!

---

## 📚 Visual Summary:

| Problem | Expression | Inverse Transform |
|--------|------------|------------------|
| 5.18.1 | $ \frac{1}{(z+2)(z+3)} $ | $ (-2)^n - (-3)^n $ |
| 5.18.2 | $ \frac{7z^2 - 11z}{(z-1)(z-2)(z+3)} $ | $ 1 - 3 \cdot 2^n + 2 \cdot (-3)^n $ |
| 5.18.3 | $ \frac{3z^2 - z}{(z-1)(z-2)^2} $ | $ 2 - 2^{n+1} + 5n \cdot 2^n $ |
| 5.18.4 | $ \frac{z^2}{z^2 + 1} $ | $ \delta_n - \cos(n\pi/2) $ |
| 5.18.5 | $ \frac{4z^2 - 2z}{(z - 1)(z - 2)^2} $ | $ 1 - 2^n + 3n \cdot 2^n $ |
| 5.18.6 | $ \frac{1}{(z - 5)^3} $ | $ \frac{n(n - 1)}{2} \cdot 5^n $ |

---

## 🧠 Pro Tip – Know These Key Pairs Like the Back of Your Hand

Here are some of the most common inverse Z-transforms used in partial fraction inversion:

| Z-Domain | Time Domain |
|----------|-------------|
| $ \frac{z}{z - a} $ | $ a^n $ |
| $ \frac{z}{(z - a)^2} $ | $ n a^n $ |
| $ \frac{z}{(z - a)^3} $ | $ \frac{n(n - 1)}{2} a^n $ |
| $ \frac{z}{z^2 + 1} $ | $ \cos(n\pi/2) $ |
| $ \frac{1}{z^2 + 1} $ | $ \frac{\sin(n\pi/2)}{z} $ |

---

### 👇 Next Up: Wrap-Up and Review of All Z-Transform Properties

Would you like me to continue with a full **review section** summarizing:
- All Z-transform formulas
- Region of Convergence rules
- Properties like linearity, damping, shifting, differentiation
- Convolution and initial/final value theorems
- Inversion techniques

I’ll create a **cheat sheet-style summary** you can print out and keep handy while studying.

Just say "**next**" or "yes", and I’ll send it right over! 😊


# 📘 Z-Transforms Study Companion  
## ✅ Section 5.19: Comprehensive Review and Summary  

---

### 🧠 What This Section Is About:

You’ve made it to the **final stretch** — time to pull everything together into a clean, organized, and easy-to-reference summary of all the key ideas from your Z-transforms journey.

This section acts like a **cheat sheet**, but with full explanations so you can truly understand what’s going on when you’re solving problems or reviewing before a test.

We’ll cover:
- The definition of the Z-transform
- Standard Z-transform pairs
- Properties (linearity, damping, shifting, differentiation)
- Initial and Final Value Theorems
- Convolution Theorem
- Inverse Z-transform using partial fractions

Let’s go!

---

## 🔁 Full Z-Transform Definition Recap

The **Z-transform** of a sequence $ u_n $ is defined as:
$$
U(z) = \mathcal{Z}(u_n) = \sum_{n=0}^{\infty} u_n z^{-n}
$$

It only exists for values of $ z $ where this infinite series converges — that’s called the **Region of Convergence (ROC)**.

And the inverse Z-transform gets you back to the original sequence:
$$
u_n = \mathcal{Z}^{-1}[U(z)]
$$

---

## 📚 Important Z-Transform Pairs

Here are the standard sequences and their Z-transforms that appear over and over in problems:

| Sequence $ u_n $ | Z-Transform $ U(z) $ | Region of Convergence |
|------------------|------------------------|------------------------|
| $ 1 $           | $ \frac{z}{z - 1} $   | $ |z| > 1 $           |
| $ (-1)^n $      | $ \frac{z}{z + 1} $   | $ |z| > 1 $           |
| $ a^n $         | $ \frac{z}{z - a} $   | $ |z| > |a| $         |
| $ e^{an} $      | $ \frac{z}{z - e^a} $| $ |z| > |e^a| $       |
| $ \frac{a^n}{n!} $ | $ e^{a/z} $         | $ |z| > 0 $           |
| $ n $           | $ \frac{z}{(z - 1)^2} $| $ |z| > 1 $           |
| $ n^2 $         | $ \frac{z(z + 1)}{(z - 1)^3} $ | $ |z| > 1 $     |
| $ n a^n $       | $ \frac{az}{(z - a)^2} $ | $ |z| > |a| $       |
| $ n^2 a^n $     | $ \frac{a z(z + a)}{(z - a)^3} $ | $ |z| > |a| $ |
| $ \cos n\theta $| $ \frac{z(z - \cos\theta)}{z^2 - 2z\cos\theta + 1} $ | $ |z| > 1 $ |
| $ \sin n\theta $| $ \frac{z \sin\theta}{z^2 - 2z\cos\theta + 1} $ | $ |z| > 1 $ |
| $ a^n \cos n\theta $ | $ \frac{z(z - a\cos\theta)}{z^2 - 2az\cos\theta + a^2} $ | $ |z| > |a| $ |
| $ a^n \sin n\theta $ | $ \frac{az \sin\theta}{z^2 - 2az\cos\theta + a^2} $ | $ |z| > |a| $ |
| $ \cosh n\theta $ | $ \frac{z(z - \cosh\theta)}{z^2 - 2z\cosh\theta + 1} $ | $ |z| > e^{\text{Re}(\theta)} $ |
| $ \sinh n\theta $ | $ \frac{z \sinh\theta}{z^2 - 2z\cosh\theta + 1} $ | $ |z| > e^{\text{Re}(\theta)} $ |
| $ e^{an} \cos n\theta $ | $ \frac{z(z - e^a \cos\theta)}{z^2 - 2ze^a \cos\theta + e^{2a}} $ | $ |z| > e^{\text{Re}(a)} $ |
| $ e^{an} \sin n\theta $ | $ \frac{e^a z \sin\theta}{z^2 - 2ze^a \cos\theta + e^{2a}} $ | $ |z| > e^{\text{Re}(a)} $ |

---

## 🧮 Key Z-Transform Properties – Explained Clearly

---

### ✅ Linearity Property

> If $ \mathcal{Z}(u_n) = U(z) $, and $ \mathcal{Z}(v_n) = V(z) $, then:
$$
\mathcal{Z}(a u_n + b v_n) = a U(z) + b V(z)
$$

**ROC:** Intersection of ROCs of $ U(z) $ and $ V(z) $

---

### ✅ Damping Rule (Change of Scale)

> Multiplying by an exponential scales $ z $:
$$
\mathcal{Z}(a^n u_n) = U\left(\frac{z}{a}\right)
$$

**ROC changes accordingly**: From $ |z| > R $ → $ |z| > aR $

---

### ✅ Shifting Theorem

#### Right Shift (Delay):
$$
\mathcal{Z}(u_{n-k}) = z^{-k} U(z)
$$

#### Left Shift (Advance):
$$
\mathcal{Z}(u_{n+k}) = z^k \left[U(z) - \sum_{m=0}^{k-1} u_m z^{-m} \right]
$$

Especially useful in difference equations!

---

### ✅ Differentiation Property (Multiplication by $ n $)

$$
\mathcal{Z}(n u_n) = -z \frac{d}{dz} U(z)
$$
$$
\mathcal{Z}(n^p u_n) = (-z)^p \frac{d^p}{dz^p} U(z)
$$

Useful for computing transforms of polynomial sequences like $ n a^n $, $ n^2 a^n $, etc.

---

### ✅ Initial Value Theorem

> To find the first few terms of a sequence directly from its Z-transform:
$$
u_0 = \lim_{z \to \infty} U(z)
$$
$$
u_1 = \lim_{z \to \infty} z(U(z) - u_0)
$$
$$
u_2 = \lim_{z \to \infty} z[z(U(z) - u_0) - u_1]
$$

And so on.

---

### ✅ Final Value Theorem

> To find the long-term behavior of a sequence:
$$
\lim_{n \to \infty} u_n = \lim_{z \to 1} (z - 1)U(z)
$$

Only works if the limit exists and the ROC includes the unit circle.

---

### ✅ Convolution Theorem

> Convolution in time domain becomes multiplication in Z-domain:
$$
\mathcal{Z}(u_n * v_n) = \mathcal{Z}(u_n) \cdot \mathcal{Z}(v_n)
$$

And vice versa:
$$
\mathcal{Z}^{-1}[U(z)\cdot V(z)] = u_n * v_n
$$

This is especially helpful in digital filtering and system design.

---

## 🔄 How to Compute Inverse Z-Transforms

There are several methods:
- Use tables of known pairs
- Power series expansion
- Partial fraction decomposition
- Complex contour integration (advanced)

For now, let’s focus on **partial fractions**, which is the most practical method.

---

## 🧩 Example: Inverse Z-transform Using Partial Fractions

Suppose we're given:
$$
U(z) = \frac{7z^2 - 11z}{(z - 1)(z - 2)(z + 3)}
$$

### Step-by-step:

1. Divide numerator and denominator by $ z $:
$$
\frac{U(z)}{z} = \frac{7z - 11}{(z - 1)(z - 2)(z + 3)} = \frac{A}{z - 1} + \frac{B}{z - 2} + \frac{C}{z + 3}
$$

2. Multiply both sides by denominator:
$$
7z - 11 = A(z - 2)(z + 3) + B(z - 1)(z + 3) + C(z - 1)(z - 2)
$$

3. Plug in values of $ z $:
- $ z = 1 $ → $ -4 = A(-1)(4) \Rightarrow A = 1 $
- $ z = 2 $ → $ 14 - 11 = B(1)(5) \Rightarrow B = -3 $
- $ z = -3 $ → $ -21 - 11 = C(-4)(-5) \Rightarrow C = 2 $

4. Reconstruct:
$$
U(z) = \frac{z}{z - 1} - \frac{3z}{z - 2} + \frac{2z}{z + 3}
$$

5. Invert term-by-term:
- $ \frac{z}{z - 1} \rightarrow 1^n = 1 $
- $ \frac{z}{z - 2} \rightarrow 2^n $
- $ \frac{z}{z + 3} \rightarrow (-3)^n $

6. Final answer:
$$
u_n = 1 - 3 \cdot 2^n + 2 \cdot (-3)^n
$$

---

## 🧠 Pro Tips for Solving Problems

1. **Start with the basic transforms** — know them like the back of your hand.
2. **Use properties smartly** — linearity, damping, convolution, shifting, and differentiation.
3. **Always check the ROC** — it tells you whether the transform exists and where.
4. **Use initial/final value theorems** to verify your answers quickly.
5. **Break complex expressions into partial fractions** — makes inversion much easier.
6. **When stuck, try expanding into power series** — sometimes it gives you insight!
7. **Think in analogies** — Z-transforms are just discrete-time Laplace transforms.

---

## 📝 Real-World Applications

Z-transforms aren’t just math for math’s sake — they have **huge applications** in real life:

- 🎵 Digital signal processing (audio filters, equalizers)
- 📡 Communication systems (error correction, modulation)
- 🧠 Control theory (designing stable digital controllers)
- 🧮 Difference equations (recursive sequences, population models)
- 📊 Data analysis (smoothing, prediction)

So once you get comfortable with these tools, you'll be able to tackle real engineering and data science problems!

---

## 🌟 Quick Recap – All in One Place

Here's everything you've learned, condensed into one powerful equation cheat sheet:

| Concept | Formula |
|--------|---------|
| Z-transform | $ U(z) = \sum_{n=0}^\infty u_n z^{-n} $ |
| Inverse Z-transform | $ u_n = \mathcal{Z}^{-1}[U(z)] $ |
| Linearity | $ \mathcal{Z}(a u_n + b v_n) = a U(z) + b V(z) $ |
| Damping Rule | $ \mathcal{Z}(a^n u_n) = U\left(\frac{z}{a}\right) $ |
| Shifting (Right) | $ \mathcal{Z}(u_{n-k}) = z^{-k} U(z) $ |
| Shifting (Left) | $ \mathcal{Z}(u_{n+k}) = z^k [U(z) - \sum_{m=0}^{k-1} u_m z^{-m}] $ |
| Multiplication by $ n $ | $ \mathcal{Z}(n u_n) = -z \frac{d}{dz} U(z) $ |
| Initial Value Theorem | $ u_0 = \lim_{z \to \infty} U(z) $ |
| Final Value Theorem | $ \lim_{n \to \infty} u_n = \lim_{z \to 1} (z - 1)U(z) $ |
| Convolution Theorem | $ \mathcal{Z}(u_n * v_n) = U(z) \cdot V(z) $ |
| Inverse via Partial Fractions | Break rational function into parts, match with known pairs, invert each part |

---

## 🧪 Practice Makes Perfect

To reinforce everything you've learned, try these exercises:
1. Find $ \mathcal{Z}(n^2 a^n) $ using differentiation
2. Use convolution to find $ \mathcal{Z}^{-1}\left(\frac{1}{(z - 2)(z - 3)}\right) $
3. Use the damping rule to find $ \mathcal{Z}(a^n \cos n\theta) $
4. Verify the final value theorem for $ U(z) = \frac{z}{z - 0.5} $
5. Solve a difference equation like $ y_n = x_n + 0.8 y_{n-1} $

Try them out, and if you want me to walk through any of them step-by-step, just say "**next**" and I’ll do it!

---

## 🧠 Final Words of Encouragement

Z-transforms might seem intimidating at first, but once you break them down and connect them to what you already know — like geometric series, Laplace transforms, and even Euler’s formula — they become **much more approachable**.

You’re not just memorizing formulas — you’re building a toolkit that lets you solve complex discrete-time systems with confidence.

Keep practicing, keep asking questions, and remember:

> Every expert was once a beginner.

---

Would you like me to continue with a **full printable study guide PDF-style summary**, or jump straight into practice problems?

Just say "**next**" and I’ll send it right over! 😊



# 📘 Z-Transforms Study Companion  
## ✅ Section 5.18: Inverse Z-Transforms Using Partial Fractions (Continued)  

---

### 🧠 What This Section Is About:

You’ve already learned how to use **partial fractions** to compute inverse Z-transforms — one of the most practical and powerful techniques in discrete-time signal analysis.

Now, we’ll continue working through more examples from your textbook — showing you how to:
- Break rational functions into simpler parts
- Match each part with known Z-transform pairs
- Combine results into a final sequence
- Understand why certain forms appear (like $ n a^n $, $ a^n $, etc.)

Let’s pick up where we left off and go through the rest of the problems in **Section 5.18**, step-by-step, with full explanations and hints.

---

## 🔍 Original Text Summary (from OCR):

> Problems covered:
- Problem 5.18.4: Find inverse Z-transform of $ \frac{z^2}{z^2 + 1} $
- Problem 5.18.5: Find inverse Z-transform of $ \frac{4z^2 - 2z}{z^3 - 5z^2 + 8z - 4} $
- Problem 5.18.6: Find inverse Z-transform of $ \frac{1}{(z - 5)^3} $

Also included are several more advanced convolution-based inverse transforms and recursive sequence problems.

Let’s work through them together!

---

## 🧮 Let’s Break It Down – Step by Step

---

### ✅ Problem 5.18.4: Find inverse Z-transform of  
$$
U(z) = \frac{z^2}{z^2 + 1}
$$

#### 💡 Strategy:
This looks tricky at first, but notice:
$$
\frac{z^2}{z^2 + 1} = 1 - \frac{1}{z^2 + 1}
$$

So:
$$
U(z) = z - \frac{z}{z^2 + 1}
$$

Now recall:
- $ \mathcal{Z}(a^n) = \frac{z}{z - a} $
- $ \mathcal{Z}(\cos n\theta) = \frac{z(z - \cos\theta)}{z^2 - 2z\cos\theta + 1} $

But here we recognize:
$$
\frac{z}{z^2 + 1} = \frac{z}{z^2 - 2z\cdot 0 + 1} = \mathcal{Z}(\cos(n\pi/2))
$$

So:
$$
u_n = \delta_n - \cos(n\pi/2)
$$

Where $ \delta_n = 1 $ when $ n = 0 $, and 0 otherwise.

#### 📌 Final Answer:
$$
u_n = \delta_n - \cos(n\pi/2)
$$

---

### ✅ Problem 5.18.5: Find inverse Z-transform of  
$$
U(z) = \frac{4z^2 - 2z}{z^3 - 5z^2 + 8z - 4}
$$

#### 💡 Strategy:
Factor denominator:
$$
z^3 - 5z^2 + 8z - 4 = (z - 1)(z - 2)^2
$$

So:
$$
U(z) = \frac{4z^2 - 2z}{(z - 1)(z - 2)^2}
$$

Divide numerator and denominator by $ z $:
$$
\frac{U(z)}{z} = \frac{4z - 2}{(z - 1)(z - 2)^2} = \frac{A}{z - 1} + \frac{B}{z - 2} + \frac{C}{(z - 2)^2}
$$

Solve for constants:
- $ A = 1 $, $ B = -1 $, $ C = 3 $

So:
$$
U(z) = \frac{z}{z - 1} - \frac{z}{z - 2} + \frac{3z}{(z - 2)^2}
$$

Invert term-by-term:
- $ \frac{z}{z - 1} \rightarrow 1 $
- $ \frac{z}{z - 2} \rightarrow 2^n $
- $ \frac{z}{(z - 2)^2} \rightarrow n \cdot 2^n $

#### 📌 Final Answer:
$$
u_n = 1 - 2^n + 3n \cdot 2^n
$$

---

### ✅ Problem 5.18.6: Find inverse Z-transform of  
$$
U(z) = \frac{1}{(z - 5)^3}
$$

#### 💡 Strategy:
This is similar to earlier convolution examples.

Recall:
$$
\mathcal{Z}((n + 1)a^n) = \frac{1}{(z - a)^2}
\Rightarrow \text{To get } \frac{1}{(z - a)^3}, differentiate again!
$$

Or better yet — use a known result:
$$
\mathcal{Z}^{-1}\left(\frac{1}{(z - a)^3}\right) = \frac{n(n - 1)}{2} a^n
$$

Here, $ a = 5 $, so:
$$
u_n = \frac{n(n - 1)}{2} \cdot 5^n
$$

#### 📌 Final Answer:
$$
u_n = \frac{n(n - 1)}{2} \cdot 5^n
$$

---

## 🧩 Bonus: Why Partial Fractions Work So Well

Partial fractions let you **break down complex expressions** into simpler ones that match known Z-transform pairs.

Think of it like this:
> Instead of trying to invert a monster function all at once, split it into pieces — each piece you already know how to invert!

This is especially useful when dealing with:
- Rational functions
- Digital filters
- Difference equations
- Systems with poles at different locations

---

## 🧠 Pro Tip – Always Check the Denominator First!

When solving inverse Z-transform problems:
1. Factor the denominator if possible
2. Divide by $ z $ if needed to make matching easier
3. Decompose into partial fractions
4. Multiply back by $ z $ if you divided earlier
5. Match terms with known transforms
6. Combine results

This will save you time and help avoid mistakes!

---

## 📚 Visual Summary:

| Problem | Expression | Inverse Transform |
|--------|------------|------------------|
| 5.18.1 | $ \frac{1}{(z+2)(z+3)} $ | $ (-2)^n - (-3)^n $ |
| 5.18.2 | $ \frac{7z^2 - 11z}{(z-1)(z-2)(z+3)} $ | $ 1 - 3 \cdot 2^n + 2 \cdot (-3)^n $ |
| 5.18.3 | $ \frac{3z^2 - z}{(z-1)(z-2)^2} $ | $ 2 - 2^{n+1} + 5n \cdot 2^n $ |
| 5.18.4 | $ \frac{z^2}{z^2 + 1} $ | $ \delta_n - \cos(n\pi/2) $ |
| 5.18.5 | $ \frac{4z^2 - 2z}{(z - 1)(z - 2)^2} $ | $ 1 - 2^n + 3n \cdot 2^n $ |
| 5.18.6 | $ \frac{1}{(z - 5)^3} $ | $ \frac{n(n - 1)}{2} \cdot 5^n $ |

---

## 🧠 Pro Tip – Know These Key Pairs Like the Back of Your Hand

Here are some of the most common inverse Z-transforms used in partial fraction inversion:

| Z-Domain | Time Domain |
|----------|-------------|
| $ \frac{z}{z - a} $ | $ a^n $ |
| $ \frac{z}{(z - a)^2} $ | $ n a^n $ |
| $ \frac{z}{(z - a)^3} $ | $ \frac{n(n - 1)}{2} a^n $ |
| $ \frac{z}{z^2 + 1} $ | $ \cos(n\pi/2) $ |
| $ \frac{1}{z^2 + 1} $ | $ \frac{\sin(n\pi/2)}{z} $ |

---

## 🧪 Practice Makes Perfect

To reinforce everything you've learned, try these exercises:
1. Find $ \mathcal{Z}^{-1}\left(\frac{z}{(z - 3)^3}\right) $
2. Use convolution to find $ \mathcal{Z}^{-1}\left(\frac{1}{(z - 2)(z - 3)}\right) $
3. Use damping rule to find $ \mathcal{Z}(a^n \cos n\theta) $
4. Verify the final value theorem for $ U(z) = \frac{z}{z - 0.5} $
5. Solve a difference equation like $ y_n = x_n + 0.8 y_{n-1} $

Try them out, and if you want me to walk through any of them step-by-step, just say "**next**" and I’ll do it!

---

Would you like me to continue with a **full printable summary guide** of all Z-transform formulas, properties, standard pairs, and tricks?

Just say "**yes**", and I’ll send over a clean, formatted version perfect for printing and reviewing — or even laminating and using as a desk reference while studying.

You're doing awesome — keep going! 😊

