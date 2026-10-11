// TODO: เปลี่ยนเป็นวันที่เริ่มคบกันของคุณ
// รูปแบบ: YYYY-MM-DD
const anniversaryDate = new Date("2026-09-10");

// คำนวณจำนวนวันที่คบกัน
function calculateDaysTogether() {
  const today = new Date();
  const startDate = new Date(anniversaryDate);

  // ตัดเวลาออก เพื่อให้คำนวณเป็นจำนวนวันได้แม่นยำขึ้น
  today.setHours(0, 0, 0, 0);
  startDate.setHours(0, 0, 0, 0);

  const differenceInMilliseconds = today - startDate;
  const days = Math.floor(differenceInMilliseconds / (1000 * 60 * 60 * 24));

  document.getElementById("daysTogether").textContent = days > 0 ? days : 0;
}

calculateDaysTogether();

// TODO: เปลี่ยนข้อความเซอร์ไพรส์ตรงนี้ได้
const surpriseMessages = [
  "ขอบคุณที่เป็นเธอนะ💟",
  "เราโชคดีมากที่มีแฟนแสนดีแบบเธอ ผ้าไหม้อยู่ข้าง ๆ",
  "รักเธอวันนี้ และจะรักมากขึ้นในทุก ๆ วันตลอดมา🎀",
  "ขอให้เราจับมือกันไปนาน ๆ เลยนะ😘👩‍❤️‍💋‍👩"
];

const surpriseButton = document.getElementById("surpriseButton");
const surpriseMessage = document.getElementById("surpriseMessage");

surpriseButton.addEventListener("click", () => {
  const randomIndex = Math.floor(Math.random() * surpriseMessages.length);
  surpriseMessage.textContent = surpriseMessages[randomIndex];

  createHeartBurst();
});

// สร้างหัวใจลอยขึ้นบนพื้นหลัง
function createFloatingHeart() {
  const heart = document.createElement("span");
  const container = document.getElementById("heartsContainer");

  heart.classList.add("heart");
  heart.textContent = "♥";
  heart.style.left = `${Math.random() * 100}vw`;
  heart.style.bottom = "-30px";
  heart.style.fontSize = `${Math.random() * 18 + 12}px`;
  heart.style.animationDuration = `${Math.random() * 4 + 5}s`;

  container.appendChild(heart);

  setTimeout(() => {
    heart.remove();
  }, 9000);
}

// สร้างหัวใจหลายดวงเมื่อกดปุ่มเซอร์ไพรส์
function createHeartBurst() {
  for (let i = 0; i < 18; i++) {
    setTimeout(createFloatingHeart, i * 90);
  }
}

// ให้มีหัวใจลอยเป็นระยะ
setInterval(createFloatingHeart, 1800);