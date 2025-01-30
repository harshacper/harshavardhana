import qrcode
from PIL import Image

# Function to generate QR code with an overlay image
def generate_qr_with_photo(data, photo_path, output_path):
    # Generate the QR code
    qr = qrcode.QRCode(
        version=1,
        error_correction=qrcode.constants.ERROR_CORRECT_H,
        box_size=10,
        border=4,
    )
    qr.add_data(data)
    qr.make(fit=True)

    # Create the QR code image
    qr_img = qr.make_image(fill_color="black", back_color="white").convert('RGB')

    # Open the overlay photo
    photo = Image.open
